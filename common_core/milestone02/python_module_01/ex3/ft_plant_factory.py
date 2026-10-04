class Plant:
    def __init__(self, name: str, height: float, plant_age: int):
        self.name = name
        self.height = height
        self.plant_age = plant_age

    def show(self) -> None:
        print(
            f"{self.name.capitalize()}: {round(self.height, 1)}cm, "
            f"{self.plant_age} days old"
        )

    def grow(self) -> None:
        self.height += 0.8

    def age(self) -> None:
        self.plant_age += 1


def main() -> None:
    print("=== Plant Factory Output ===")
    rose = Plant("rose", 25.0, 30)
    oak = Plant("oak", 200.0, 365)
    cactus = Plant("cactus", 5.0, 90)
    sunflower = Plant("sunflower", 80.0, 45)
    fern = Plant("fern", 15.0, 120)

    plants: list[Plant] = [rose, oak, cactus, sunflower, fern]

    for plant in plants:
        print("Created: ", end="")
        plant.show()


if __name__ == "__main__":
    main()
