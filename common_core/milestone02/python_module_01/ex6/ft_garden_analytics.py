def displays_statistics(object: Plant) -> None:
    print(f"[statistics for {object.name}]")
    print(object.stats.show_statistics())


class Plant:
    class Stats:
        def __init__(self) -> None:
            self.__show_calls = 0
            self.__grow_calls = 0
            self.__age_calls = 0

        def show_statistics(self) -> str:
            return (
                f"Stats: {self.__grow_calls} grow, "
                f"{self.__age_calls} age, {self.__show_calls} show"
            )

        def record_show(self) -> None:
            self.__show_calls += 1

        def record_grow(self) -> None:
            self.__grow_calls += 1

        def record_age(self) -> None:
            self.__age_calls += 1

    def __init__(self, name: str, height: int, plant_age: int) -> None:
        self.name = name
        self._height = height
        self._plant_age = plant_age
        self.stats = self.Stats()

    @staticmethod
    def check_age(age: int) -> None:
        if age > 365:
            print(f"Is {age} days more than a year? -> True")
        else:
            print(f"Is {age} days more than a year? -> False")

    @classmethod
    def create_anonymous(cls: type['Plant']) -> Plant:
        return cls("Unknown plant", 0, 0)

    def show(self) -> None:
        print(
            f"{self.name.capitalize()}: {self._height:.1f}cm, "
            f"{self._plant_age} days old"
        )
        self.stats.record_show()

    def grow(self, how_much_2grow: int) -> None:
        self._height += how_much_2grow
        self.stats.record_grow()

    def age(self, how_much_2age: int) -> None:
        self._plant_age += how_much_2age
        self.stats.record_age()

    def set_height(self, height: int) -> None:
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
            self._age = age
            print(f"Age updated: {age} days")

    def get_height(self) -> int:
        return self._height

    def get_age(self) -> int:
        return self._age


class Flower(Plant):
    def __init__(
        self, name: str, height: int, plant_age: int, color: str
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
        self.has_bloomed = True


class Seed(Flower):
    def __init__(self, name: str, height: int, plant_age: int, color: str) -> None:
        super().__init__(name, height, plant_age, color)
        self.seeds = 0

    def show(self) -> None:
        super().show()
        if not self.has_bloomed:
            print(" Seeds: 0")
        else:
            print(" Seeds: 42")


class Tree(Plant):
    class TreeStats(Plant.Stats):
        def __init__(self) -> None:
            super().__init__()
            self.__shade_calls = 0

        def record_shade(self) -> None:
            self.__shade_calls += 1

        def show_statistics(self) -> str:
            return super().show_statistics() + f"\n {self.__shade_calls} shade"

    def __init__(
        self, name: str, height: int, plant_age: int, trunk_diameter: int
    ) -> None:
        super().__init__(name, height, plant_age)
        self.trunk_diameter = trunk_diameter
        self.stats: Tree.TreeStats = self.TreeStats()

    def show(self) -> None:
        super().show()
        print(f" Trunk diameter: {self.trunk_diameter:.1f}cm")

    def produce_shade(self) -> None:
        print(f"[asking the {self.name} to produce shade]")
        print(
            f"Tree {self.name.capitalize()} now produces a shade of "
            f"{self._height:.1f}cm long and {self.trunk_diameter:.1f}cm wide."
        )
        self.stats.record_shade()


def main() -> None:
    print("=== Garden statistics ===")
    print("=== Check year-old")
    Plant.check_age(30)
    Plant.check_age(400)
    print()

    print("=== Flower")
    rose = Flower("rose", 15, 10, "red")
    rose.show()
    displays_statistics(rose)
    print("[asking the rose to grow and bloom]")
    rose.grow(8)
    rose.bloom()
    rose.show()
    displays_statistics(rose)
    print()

    print("=== Tree")
    oak = Tree("oak", 200, 365, 5)
    oak.show()
    displays_statistics(oak)
    oak.produce_shade()
    displays_statistics(oak)
    print()

    print("=== Seed")
    sunflower = Seed("sunflower", 80, 45, "yellow")
    sunflower.show()
    print("[make sunflower grow, age and bloom]")
    sunflower.grow(30)
    sunflower.age(20)
    sunflower.bloom()
    sunflower.show()
    displays_statistics(sunflower)
    print()

    print("=== Anonymous")
    anonymous_plant = Plant.create_anonymous()
    anonymous_plant.show()
    displays_statistics(anonymous_plant)


if __name__ == "__main__":
    main()
