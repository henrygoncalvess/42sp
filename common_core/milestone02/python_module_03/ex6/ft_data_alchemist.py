import random


def main() -> None:
    print("=== Game Data Alchemist ===")
    print()

    players: list[str] = [
        "Alice",
        "bob",
        "Charlie",
        "dylan",
        "Emma",
        "Gregory",
        "john",
        "kevin",
        "Liam",
    ]
    print(f"Initial list of players: {players}")

    capitalized: list[str] = [n.capitalize() for n in players]
    print(f"New list with all names capitalized: {capitalized}")

    only_capitalized: list[str] = [n for n in players if n == n.capitalize()]
    print(f"New list of capitalized names only: {only_capitalized}")
    print()

    scores: dict[str, int] = {n: random.randint(0, 1000) for n in capitalized}
    print(f"Score dict: {scores}")

    avg: float = sum(scores.values()) / len(scores)
    print(f"Score average is {round(avg, 2)}")

    high_scores: dict[str, int] = {n: s for n, s in scores.items() if s > avg}
    print(f"High scores: {high_scores}")


if __name__ == "__main__":
    main()
