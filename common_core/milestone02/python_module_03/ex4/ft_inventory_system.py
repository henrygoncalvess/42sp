import sys


def parse_inventory(args: list[str]) -> dict[str, int]:
    inventory: dict[str, int] = {}

    for arg in args:
        parts: list[str] = arg.split(":")
        if len(parts) != 2 or parts[0] == "":
            print(f"Error - invalid parameter '{arg}'")
            continue
        name: str = parts[0]
        if name in inventory:
            print(f"Redundant item '{name}' - discarding")
            continue
        try:
            quantity: int = int(parts[1])
            if quantity <= 0:
                raise ValueError(f"quantity must be positive, got {quantity}")
            inventory[name] = quantity
        except ValueError as e:
            print(f"Quantity error for '{name}': {e}")
    return inventory


def print_analysis(inventory: dict[str, int]) -> None:
    items: list[str] = list(inventory.keys())
    total: int = sum(inventory.values())

    print(f"Item list: {items}")
    print(f"Total quantity of the {len(items)} items: {total}")

    for item in items:
        percent: float = round(inventory[item] / total * 100, 1)
        print(f"Item {item} represents {percent}%")

    most: str = items[0]
    least: str = items[0]
    for item in items:
        if inventory[item] > inventory[most]:
            most = item
        if inventory[item] < inventory[least]:
            least = item
    print(f"Item most abundant: {most} with quantity {inventory[most]}")
    print(f"Item least abundant: {least} with quantity {inventory[least]}")


def main() -> None:
    print("=== Inventory System Analysis ===")

    inventory: dict[str, int] = parse_inventory(sys.argv[1:])
    print(f"Got inventory: {inventory}")

    if len(inventory) == 0:
        print("Your inventory is empty. Usage: python3 "
              "ft_inventory_system.py <item>:<quantity> ...")
    else:
        print_analysis(inventory)

    inventory.update({"magic_item": 1})
    print(f"Updated inventory: {inventory}")


if __name__ == "__main__":
    main()
