import sys


def main() -> None:
    print("=== Command Quest ===")
    list_args: list[str] = sys.argv
    num_args: int = len(list_args)
    print(f"Program name: {list_args[0]}")
    if num_args > 1:
        print(f"Arguments received: {num_args - 1}")
        arg_pos: int = 1
        while arg_pos < num_args:
            print(f"Argument {arg_pos}: {list_args[arg_pos]}")
            arg_pos += 1
    else:
        print("No arguments provided!")
    print(f"Total arguments: {num_args}")


if __name__ == "__main__":
    main()
