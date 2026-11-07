# ex3
players = ["ana", "bia", "ana", "caio", "bia", "duda", "ana"]
print(f"{len(players)} logins, {len(set(players))} players\n")

owned: set[str] = set(["Boss Slayer", "Survivor", "Strategist"])
for wanted in ["Survivor", "Night Owl"]:
    print(f"{wanted}: {wanted in owned}")

seen: set[tuple[int, int]] = set()
for pos in [[0, 0], [1, 2], [0, 0]]:
    try:
        seen = seen.union(set([pos]))
    except TypeError as e:
        print(f"TypeError: {e}")
        seen = seen.union(set([(pos[0], pos[1])]))
print(seen, len(seen))

# ---
# ex5
