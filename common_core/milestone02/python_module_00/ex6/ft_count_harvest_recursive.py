def ft_count_harvest_recursive(
    counter: int = 1,
    day_until_harv: int | None = None
) -> None:
    if day_until_harv is None:
        day_until_harv = int(input("Days until harvest: "))
    print(f"Day {counter}")
    if counter < day_until_harv:
        ft_count_harvest_recursive(counter + 1, day_until_harv)
    else:
        print("Harvest time!")
