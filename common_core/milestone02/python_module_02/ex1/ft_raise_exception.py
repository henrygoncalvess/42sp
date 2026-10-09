def input_temperature(temp_str: str) -> int:
    temp_nbr: int = int(temp_str)
    if 0 <= temp_nbr <= 40:
        print(f"Temperature is now {temp_nbr}°C")
    elif temp_nbr > 40:
        raise Exception(f"{temp_nbr}°C is too hot for plants (max 40°C)")
    elif temp_nbr < 0:
        raise Exception(f"{temp_nbr}°C is too cold for plants (min 0°C)")
    return temp_nbr


def test_temperature() -> None:
    print("=== Garden Temperature Checker ===\n")
    for input_data in ["25", "abc", "100", "-50"]:
        print(f"Input data is '{input_data}'")
        try:
            input_temperature(input_data)
        except Exception as error:
            print(f"Caught input_temperature error: {error}")
        print()
    print("All tests completed - program didn't crash!")


if __name__ == "__main__":
    test_temperature()
