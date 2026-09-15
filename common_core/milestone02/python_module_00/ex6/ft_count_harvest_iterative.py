def ft_count_harvest_iterative():
    days_until_harv = int(input("Days until harvest: "))
    for day in range(1, days_until_harv + 1):
        print(f"Day {day}")
    print("Harvest time!")
