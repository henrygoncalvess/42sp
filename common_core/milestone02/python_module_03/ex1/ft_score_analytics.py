import sys


def main() -> None:
    reset: str = "\033[0m"
    b_blue: str = "\033[1;34m"
    b_red: str = "\033[1;31m"
    yellow: str = "\033[33m"
    b_green: str = "\033[1;32m"

    print(f"{b_blue}=== Player Score Analytics ==={reset}")

    if len(sys.argv) == 1:
        print(f"{b_red}No scores provided. Usage: python3 ",
              "ft_score_analytics.py <score1> <score2> ...")
        return

    scores: list[int] = []

    i = 1
    while i < len(sys.argv):
        try:
            scores += [int(sys.argv[i])]
        except ValueError:
            print(f"\033[1;3;31mInvalid parameter: '{sys.argv[i]}'{reset}")
        i += 1

    if not scores:
        print(f"{b_red}No scores provided. Usage: python3 ",
              "ft_score_analytics.py <score1> <score2> ...")
        return

    num_args: int = len(scores)

    data = [
        ["Total players ", len(scores)],
        ["Total score ", sum(scores)],
        ["Average score ", sum(scores) / len(scores)],
        ["High score ", max(scores)],
        ["Low score ", min(scores)],
        ["Score range ", max(scores) - min(scores)],
    ]

    print(f"{yellow}{'Scores processed ':·<20}", end=f" {b_green}[")
    score_num = 0
    while score_num < len(scores):
        if score_num < len(scores) - 1:
            print(f"{scores[score_num]}", end=", ")
        else:
            print(f"{scores[score_num]}", end="")
        score_num += 1
    print(f"]{reset}")
    for label, val in data:
        print(f"{yellow}{label:·<20} {b_green}{val}{reset}")


if __name__ == "__main__":
    main()
