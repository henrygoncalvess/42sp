def ft_seed_inventory(seed_type: str, quantity: int, unit: str) -> None:
    valid_units = {
        "packets": "{quantity} packets available",
        "grams": "{quantity} grams total",
        "area": "covers {quantity} square meters"
    }

    if unit in valid_units:
        message = valid_units[unit].format(quantity=quantity)
        print(f"{seed_type.title()} seeds: {message}")
    else:
        print("Unknown unit type")
