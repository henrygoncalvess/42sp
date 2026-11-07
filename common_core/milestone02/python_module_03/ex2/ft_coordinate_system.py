import math


def get_player_pos() -> tuple[float, float, float]:
    while True:
        raw_input: str = input(
            "Enter new coordinates as floats in format 'x,y,z': ")
        try:
            x_part, y_part, z_part = raw_input.split(",")
        except ValueError:
            print("Invalid syntax")
            continue

        current_param: str = x_part
        try:
            x: float = float(current_param)
            current_param = y_part
            y: float = float(current_param)
            current_param = z_part
            z: float = float(current_param)
            return x, y, z
        except ValueError as error:
            print(f"Error on parameter '{current_param}': {error}")


def get_distance(pos1: tuple[float, float, float],
                 pos2: tuple[float, float, float]) -> float:
    x1, y1, z1 = pos1
    x2, y2, z2 = pos2
    return math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2 + (z2 - z1) ** 2)


def main() -> None:
    print("=== Game Coordinate System ===\n")

    try:
        print("Get a first set of coordinates")
        pos1: tuple[float, float, float] = get_player_pos()
        print(f"Got a first tuple: {pos1}")
        x, y, z = pos1
        print(f"It includes: X={x}, Y={y}, Z={z}")
        center: tuple[float, float, float] = (0.0, 0.0, 0.0)
        print(f"Distance to center: {round(get_distance(center, pos1), 4)}")

        print("\nGet a second set of coordinates")
        pos2: tuple[float, float, float] = get_player_pos()
        distance_p1_p2: float = round(get_distance(pos1, pos2), 4)
        print(f"Distance between the 2 sets of coordinates: {distance_p1_p2}")
    except (EOFError, KeyboardInterrupt):
        print("\nInput interrupted. Exiting.")


if __name__ == "__main__":
    main()
