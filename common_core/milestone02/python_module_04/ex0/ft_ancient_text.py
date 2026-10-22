import sys
import typing


def recover_archive(filename: str) -> None:
    print(f"Accessing file '{filename}'")
    try:
        archive: typing.IO[str] = open(filename, "r")
    except OSError as error:
        print(f"Error opening file '{filename}': {error}")
        return

    try:
        content: str = archive.read()
        print("---\n")
        print(content)
        print("---")
    except (OSError, UnicodeDecodeError) as error:
        print(f"Error reading file '{filename}': {error}")
    finally:
        archive.close()
        print(f"File '{filename}' closed.")


def main() -> None:
    if len(sys.argv) != 2:
        print("Usage: ft_ancient_text.py <file>")
        return
    print("=== Cyber Archives Recovery ===")
    recover_archive(sys.argv[1])


if __name__ == "__main__":
    main()
