import sys
import math


def parse_coordinates(raw_input: str) -> list[str]:
    parts: list[str] = ["", "", ""]

    i: int = 0
    list_pos: int = 0
    while i < len(raw_input):
        char: str = raw_input[i]
        if char == ',':
            list_pos += 1
            if list_pos > 2:
                raise ValueError
            i += 1
            continue
        parts[list_pos] += char
        i += 1
    if list_pos != 2:
        raise ValueError
    return parts


def get_player_pos() -> tuple[float, float, float]:
    while True:
        try:
            raw_input: str = input(
                "Enter new coordinates as floats in format 'x,y,z': ")
            coordinates: list[str] = parse_coordinates(raw_input)

            x: float = float(coordinates[0])
            y: float = float(coordinates[1])
            z: float = float(coordinates[2])
            return (x, y, z)
        except ValueError:
            print("Invalid syntax")


def main() -> None:
    print("=== Game Coordinate System ===\n")

    print("Get a first set of coordinates")
    tuple1: tuple[float, float, float] = get_player_pos()
    print(f"Distance to center: {tuple1}")

    print("Get a second set of coordinates")
    tuple2: tuple[float, float, float] = get_player_pos()
    print(f"Distance between the 2 sets of coordinates: {tuple2}")


if __name__ == "__main__":
    main()
