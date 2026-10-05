def ft_count_harvest_recursive() -> None:
    days_until_harvest: int = int(input("Days until harvest: "))

    def count_days(day: int) -> None:
        print(f"Day {day}")
        if day < days_until_harvest:
            count_days(day + 1)
        else:
            print("Harvest time!")

    count_days(1)
