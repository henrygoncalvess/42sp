#!/usr/bin/env python3

# This program finds exercise directories (ex00, ex01, ...)
# located beside this file and runs every .py file inside each one.

import os
import subprocess
import glob

# __file__ is the path of this file itself (run_exercises.py).
# os.path.abspath(...) turns it into an absolute path, for example:
#   /home/usuario/projeto/python_module_01/run_exercises.py
#
# os.path.dirname(...) removes the file name and keeps only the directory:
#   /home/usuario/projeto/python_module_01
# We keep this so the program works even when it is run from another
# directory in the terminal.
script_directory = os.path.dirname(os.path.abspath(__file__))

# os.listdir(directory) returns the names of items directly inside "directory".
# Example: ["ex00", "ex01", "run_exercises.py", ".gitignore"]
#
# We will store only directories whose names start with "ex" here.
exercise_directories = []
for item in os.listdir(script_directory):
    # os.path.join combines parts of a path using the operating system's
    # correct separator. Example: join("/project", "ex00") -> "/project/ex00"
    item_path = os.path.join(script_directory, item)

    # os.path.isdir(...) is True only when item_path is a directory.
    # item.startswith("ex") is True for names such as "ex00" and "ex01".
    if os.path.isdir(item_path) and item.startswith("ex"):
        exercise_directories.append(item)

# Sort the list to run ex00 before ex01, ex02, and so on.
exercise_directories.sort()

# Run mypy and flake8 checks on the module directory


def run_command(msg: str, command: str) -> None:
    print("=" * 40)
    print(msg)
    print("=" * 40)
    subprocess.run(command, shell=True, cwd=script_directory)


run_command("🔍 Running mypy . --strict", "mypy . --strict")
run_command("🔍 Running flake8", "flake8")
print()

# For each exercise directory found...
for exercise_folder in exercise_directories:
    print("=" * 40)
    print(f"📂 Directory: ./{exercise_folder}")
    print("=" * 40)

    folder_path = os.path.join(script_directory, exercise_folder)

    # We build a pattern, not a path to one specific file:
#   /.../ex00/*.py
    # The asterisk (*) is a wildcard: it means "any sequence of characters".
    # Therefore, *.py represents any file ending in .py, such as "hello.py",
    # "tester.py", or "main.py".
    python_file_pattern = os.path.join(folder_path, "*.py")

    # "glob" is a Python standard-library module that searches for paths
    # using wildcards, similarly to the terminal.
    #
    # glob.glob(pattern) means:
    #   - the first "glob" is the module we imported: import glob
    #   - the second "glob" is the function inside that module.
    #
    # Standalone example:
    #   glob.glob("ex00/*.py")
    # may return ["ex00/hello.py", "ex00/test.py"].
    # If it finds no files, it returns an empty list: [].
    #
    # Here, the function receives the complete pattern created above and
    # returns all Python files in the current exercise directory.
    python_files = glob.glob(python_file_pattern)

    # glob does not guarantee the result order; we sort it to make execution
    # predictable (for example, a.py before b.py).
    python_files.sort()

    # Run every .py file found in this directory.
    for python_script_path in python_files:
        # basename removes the path and leaves only the file name:
        # "/.../ex00/hello.py" -> "hello.py"
        python_script_name = os.path.basename(python_script_path)
        print(f"▶️  Running {python_script_name}...\n---")

        # subprocess.run starts another program from Python.
        #
        # The first argument is the command line split into a list:
        # ["python3", "hello.py"] is equivalent to typing this in the terminal:
        #   python3 hello.py
        #
        # cwd means "current working directory" and sets the directory where
        # the command runs. This matters if an exercise uses relative files,
        # such as open("data.txt"): it will look in ex00/, not in the directory
        # from which this launcher was called.
        subprocess.run(["python3", python_script_name], cwd=folder_path)
        print("---")
