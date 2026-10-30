def secure_archive(filename: str, action: str = "read",
                   content: str = "") -> tuple[bool, str]:
    try:
        if action == "read":
            with open(filename, "r") as file:
                return (True, file.read())
        elif action == "write":
            with open(filename, "w") as file:
                file.write(content)
            return (True, "Content successfully written to file")
    except (OSError, UnicodeDecodeError) as error:
        return (False, str(error))
    return (False, f"Unknown action '{action}'")


def main() -> None:
    fragment_file: str = "/tmp/ancient_fragment.txt"
    backup_file: str = "/tmp/vault_backup.txt"

    print("=== Cyber Archives Security ===\n")
    print("Using 'secure_archive' to read from a nonexistent file:")
    print(secure_archive("/not/existing/file"))

    print("\nUsing 'secure_archive' to read from an inaccessible file:")
    print(secure_archive("/etc/shadow"))

    print("\nUsing 'secure_archive' to read from a regular file:")
    fragment: tuple[bool, str] = secure_archive(fragment_file)
    print(fragment)

    print("\nUsing 'secure_archive' to write previous content to a new file:")
    if fragment[0]:
        print(secure_archive(backup_file, "write", fragment[1]))
    else:
        print("Nothing to write: the read failed")


if __name__ == "__main__":
    main()
