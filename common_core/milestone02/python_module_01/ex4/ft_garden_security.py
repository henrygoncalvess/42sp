class Plant:
    def __init__(self, name: str, height: int, plant_age: int):
        self.name = name
        self._height = height
        self._plant_age = plant_age

    def show(self) -> None:
        print(
            f"{self.name.capitalize()}: {self._height:.1f}cm, "
            f"{self._plant_age} days old"
        )

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


def main() -> None:
    print("=== Garden Security System ===")
    rose = Plant("Rose", 15, 10)

    print("Plant created: ", end="")
    rose.show()
    print()

    rose.set_height(25)
    rose.set_age(30)
    print()

    rose.set_height(-1)
    rose.set_age(-1)
    print()

    print("Current state: ", end="")
    rose.show()


if __name__ == "__main__":
    main()
