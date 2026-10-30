import sys
import typing


def report_error(message: str) -> None:
    sys.stdout.flush()
    sys.stderr.write(f"[STDERR] {message}\n")


def recover_archive(filename: str) -> str | None:
    print(f"Accessing file '{filename}'")
    try:
        archive: typing.IO[str] = open(filename, "r")
    except OSError as error:
        report_error(f"Error opening file '{filename}': {error}")
        return None

    content: str | None = None
    try:
        content = archive.read()
        print("---\n")
        print(content)
        print("---")
    except (OSError, UnicodeDecodeError) as error:
        report_error(f"Error reading file '{filename}': {error}")
    finally:
        archive.close()
        print(f"File '{filename}' closed.")
    return content


def transform_archive(content: str) -> str:
    transformed: str = ""
    for line in content.splitlines():
        transformed += line + "#\n"
    return transformed


def ask_filename() -> str:
    sys.stdout.write("Enter new file name (or empty): ")
    sys.stdout.flush()
    try:
        answer: str = sys.stdin.readline()
    except KeyboardInterrupt:
        answer = ""
    if answer == "":
        sys.stdout.write("\n")
    return answer.rstrip("\n")


def preserve_archive(filename: str, content: str) -> None:
    print(f"Saving data to '{filename}'")
    try:
        archive: typing.IO[str] = open(filename, "w")
    except OSError as error:
        report_error(f"Error opening file '{filename}': {error}")
        print("Data not saved.")
        return

    try:
        try:
            archive.write(content)
        finally:
            archive.close()
    except OSError as error:
        report_error(f"Error writing file '{filename}': {error}")
        print("Data not saved.")
        return
    print(f"Data saved in file '{filename}'.")


def main() -> None:
    if len(sys.argv) != 2:
        print("Usage: ft_stream_management.py <file>")
        return
    print("=== Cyber Archives Recovery & Preservation ===")
    content: str | None = recover_archive(sys.argv[1])
    if content is None:
        return

    transformed: str = transform_archive(content)
    print("\nTransform data:")
    print("---\n")
    print(transformed)
    print("---")

    filename: str = ask_filename()
    if filename == "":
        print("Not saving data.")
        return
    preserve_archive(filename, transformed)


if __name__ == "__main__":
    main()
