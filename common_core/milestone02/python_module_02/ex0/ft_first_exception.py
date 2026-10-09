def input_temperature(temp_str: str) -> int:
    temp_nbr: int = int(temp_str)
    print(f"Temperature is now {temp_nbr}°C")
    return temp_nbr


def test_temperature() -> None:
    print("=== Garden Temperature ===\n")
    for input_data in ["25", "abc"]:
        print(f"Input data is '{input_data}'")
        try:
            input_temperature(input_data)
        except Exception as error:
            print(f"Caught input_temperature error: {error}")
        print()
    print("All tests completed - program didn't crash!")


if __name__ == "__main__":
    test_temperature()
