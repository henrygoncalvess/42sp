#!/usr/bin/env python3

import os
import subprocess
import glob

# Get the directory where this script is located
script_directory = os.path.dirname(os.path.abspath(__file__))

# Find all directories that start with 'ex'
exercise_directories = []
for item in os.listdir(script_directory):
    item_path = os.path.join(script_directory, item)
    if os.path.isdir(item_path) and item.startswith("ex"):
        exercise_directories.append(item)

# Sort directories alphabetically
exercise_directories.sort()

# Loop through each exercise directory
for exercise_folder in exercise_directories:
    print("=" * 40)
    print(f"📂 Directory: ./{exercise_folder}")
    print("=" * 40)

    folder_path = os.path.join(script_directory, exercise_folder)

    # Find all python files inside the directory
    python_file_pattern = os.path.join(folder_path, "*.py")
    python_files = glob.glob(python_file_pattern)
    python_files.sort()

    # Run each python file found
    for python_script_path in python_files:
        python_script_name = os.path.basename(python_script_path)
        print(f"▶️  Running {python_script_name}...\n")

        # Execute the python script inside its corresponding folder
        subprocess.run(["python3", python_script_name], cwd=folder_path)
        print()

    print()
