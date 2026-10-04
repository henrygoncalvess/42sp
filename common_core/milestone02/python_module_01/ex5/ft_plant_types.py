class Plant:
    def __init__(self, name: str, height: float, plant_age: int) -> None:
        self.name = name
        self._height: float = float(height)
        self._plant_age = plant_age

    def show(self) -> None:
        print(
            f"{self.name.capitalize()}: {self._height:.1f}cm, "
            f"{self._plant_age} days old"
        )

    def grow(self) -> None:
        self._height += 2.1

    def age(self) -> None:
        self._plant_age += 1

    def set_height(self, height: float) -> None:
        if height < 0:
            print(f"{self.name}: Error, height can't be negative")
            print("Height update rejected")
        else:
            self._height = height
            print(f"Height updated: {height}cm")

    def set_age(self, age: int) -> None:
        if age < 0:
            print(f"{self.name}: Error, age can't be negative")
            print("Age update rejected")
        else:
            self._plant_age = age
            print(f"Age updated: {age} days")

    def get_height(self) -> float:
        return self._height

    def get_age(self) -> int:
        return self._plant_age


class Flower(Plant):
    def __init__(
        self, name: str, height: float, plant_age: int, color: str
    ) -> None:
        super().__init__(name, height, plant_age)
        self.color = color
        self.has_bloomed = False

    def show(self) -> None:
        super().show()
        print(f" Color: {self.color}")
        if self.has_bloomed:
            print(f" {self.name.capitalize()} is blooming beautifully!")
        else:
            print(f" {self.name.capitalize()} has not bloomed yet")

    def bloom(self) -> None:
        print(f"[asking the {self.name} to bloom]")
        self.has_bloomed = True


class Tree(Plant):
    def __init__(
        self, name: str, height: float, plant_age: int, trunk_diameter: float
    ) -> None:
        super().__init__(name, height, plant_age)
        self.trunk_diameter = trunk_diameter

    def show(self) -> None:
        super().show()
        print(f" Trunk diameter: {self.trunk_diameter:.1f}cm")

    def produce_shade(self) -> None:
        print(f"[asking the {self.name} to produce shade]")
        print(
            f"Tree {self.name.capitalize()} now produces a shade of "
            f"{self._height:.1f}cm long and {self.trunk_diameter:.1f}cm wide."
        )


class Vegetable(Plant):
    def __init__(
        self,
        name: str,
        height: float,
        plant_age: int,
        harvest_season: str,
        nutritional_value: float,
    ) -> None:
        super().__init__(name, height, plant_age)
        self.harvest_season = harvest_season
        self.nutritional_value = nutritional_value

    def show(self) -> None:
        super().show()
        print(f" Harvest season: {self.harvest_season.capitalize()}")
        print(f" Nutritional value: {round(self.nutritional_value)}")

    def grow(self) -> None:
        super().grow()
        self.nutritional_value += 0.5

    def age(self) -> None:
        super().age()
        self.nutritional_value += 0.5


def main() -> None:
    print("=== Garden Plant Types ===")
    print("=== Flower")
    rose = Flower("rose", 15, 10, "red")
    rose.show()
    rose.bloom()
    rose.show()
    print()

    print("=== Tree")
    oak = Tree("oak", 200, 365, 5)
    oak.show()
    oak.produce_shade()
    print()

    print("=== Vegetable")
    tomato = Vegetable("tomato", 5, 10, "april", 0)
    tomato.show()
    print("[make tomato grow and age for 20 days]")
    for i in range(0, 20):
        tomato.grow()
        tomato.age()
    tomato.show()


if __name__ == "__main__":
    main()
