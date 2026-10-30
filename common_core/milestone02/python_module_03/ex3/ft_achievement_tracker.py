import random


ACHIEVEMENTS: list[str] = [
    "Crafting Genius",
    "World Savior",
    "Master Explorer",
    "Collector Supreme",
    "Untouchable",
    "Boss Slayer",
    "Strategist",
    "Unstoppable",
    "Speed Runner",
    "Survivor",
    "Treasure Hunter",
    "First Steps",
    "Sharp Mind",
    "Hidden Path Finder",
    "Night Owl",
]


def gen_player_achievements() -> set[str]:
    amount: int = random.randint(6, 9)
    return set(random.sample(ACHIEVEMENTS, amount))


def main() -> None:
    print("=== Achievement Tracker System ===\n")

    players: list[tuple[str, set[str]]] = [
        ("Alice", gen_player_achievements()),
        ("Bob", gen_player_achievements()),
        ("Charlie", gen_player_achievements()),
        ("Dylan", gen_player_achievements()),
    ]

    for name, achievements in players:
        print(f"Player {name}: {achievements}")

    distinct: set[str] = set()
    common: set[str] = players[0][1]
    for name, achievements in players:
        distinct = distinct.union(achievements)
        common = common.intersection(achievements)

    print(f"\nAll distinct achievements: {distinct}\n")
    print(f"Common achievements: {common}\n")

    for name, achievements in players:
        others: set[str] = set()
        for other_name, other_achievements in players:
            if other_name != name:
                others = others.union(other_achievements)
        print(f"Only {name} has: {achievements.difference(others)}")
    print()

    all_achievements: set[str] = set(ACHIEVEMENTS)
    for name, achievements in players:
        missing: set[str] = all_achievements.difference(achievements)
        print(f"{name} is missing: {missing}")


if __name__ == "__main__":
    main()
