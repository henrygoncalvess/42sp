class Plant:
    def __init__(self, name: str, height: int, age: int):
        self.name = name
        self.height = height
        self.age = age

    def show(self):
        print(f"{self.name}: {self.height}cm, {self.age} days old")

def main():
    rose = Plant("Rose", 25, 30)
    sunflower = Plant("Sunflower", 80, 45)
    actus = Plant("Cactus", 25, 30)

    print("=== Garden Plant Registry ===")
    rose.show()


if __name__ == "__main__":
    main()
