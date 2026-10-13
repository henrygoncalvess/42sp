class GardenError(Exception):
    def __init__(self, message: str = "Unknown plant error") -> None:
        super().__init__(message)


class PlantError(GardenError):
    def __init__(self, message: str = "Unknown plant error") -> None:
        super().__init__(message)


class WaterError(GardenError):
    def __init__(self, message: str = "Unknown plant error") -> None:
        super().__init__(message)


def test_plant_error() -> None:
    raise PlantError("The tomato plant is wilting!")


def test_water_error() -> None:
    raise WaterError("Not enough water in the tank!")


def test_custom_errors() -> None:
    print("=== Custom Garden Errors Demo ===")
    test_cases = [
        ("PlantError", test_plant_error),
        ("WaterError", test_water_error),
    ]
    for label, func in test_cases:
        print(f"Testing {label}...")
        try:
            func()
        except PlantError as error:
            print(f"Caught PlantError: {error}")
        except WaterError as error:
            print(f"Caught WaterError: {error}")
        print()

    print("Testing catching all garden errors...")
    for func in (test_plant_error, test_water_error):
        try:
            func()
        except GardenError as error:
            print(f"Caught GardenError: {error}")

    print("\nAll custom error types work correctly!")


if __name__ == "__main__":
    test_custom_errors()
