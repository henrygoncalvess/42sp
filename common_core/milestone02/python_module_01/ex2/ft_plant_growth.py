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
    rose = Plant("Rose", 25, 30)

    print("=== Garden Plant Growth ===")
    rose.show()

    growth_during_week: float = 0.0
    for i in range(1, 8):
        rose.grow()
        rose.age()
        growth_during_week += 0.8
        print(f"=== Day {i} ===")
        rose.show()
    print(f"Growth this week: {growth_during_week}cm")


if __name__ == "__main__":
    main()
