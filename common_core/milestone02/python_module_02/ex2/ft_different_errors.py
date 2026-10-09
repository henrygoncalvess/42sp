def garden_operations(operation_number: int) -> int:
    if operation_number == 0:
        int('abc')
    elif operation_number == 1:
        1 / 0
    elif operation_number == 2:
        open("/non/existent/file")
    elif operation_number == 3:
        "6" + 7
    return int(operation_number)


def test_error_types() -> None:
    print("=== Garden Error Types Demo ===\n")
    for input_data in [0, 1, 2, 3, 4]:
        print(f"Testing operation {input_data}...")
        try:
            garden_operations(input_data)
            print("Operation completed successfully")
        except Exception as error:
            print(
                f"Caught {error.__class__.__name__}: {error}")
    print("\nAll error types tested successfully!")


if __name__ == "__main__":
    test_error_types()
