import sys


def main() -> None:
    print("=== Command Quest ===")
    list_args: list[str] = sys.argv
    num_args: int = len(sys.argv)
    print(f"Program name: {list_args[0]}")
    if len(list_args) > 1:
        print(f"Arguments received: {num_args - 1}")
        arg_num: int = 1
        while arg_num < num_args:
            print(f"Argument {arg_num}: {list_args[arg_num]}")
            arg_num += 1
    else:
        print("No arguments provided!")
    print(f"Total arguments: {num_args}")


if __name__ == "__main__":
    main()
