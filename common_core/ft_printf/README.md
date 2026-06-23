_This project has been created as part of the 42 curriculum by hegoncal._

# ft_printf

## Description

**ft_printf** ...

## Instructions

Clone the repository and build the library with `make`:

```sh
git clone <repository-url> ft_printf
cd ft_printf
make
```

This produces the static library `libftprintf.a` in the project root.

Available Makefile rules:

| Rule | Description |
| --- | --- |
| `make`        | Build `libftprintf.a` (default `all` rule).      |
| `make clean`  | Remove the object (`.o`) files.                  |
| `make fclean` | Remove the object files **and** `libftprintf.a`. |
| `make re`     | Rebuild everything from scratch.                 |

The printf is compiled with `cc -Wall -Wextra -Werror`.

## Resources

### Use of AI

AI assistance was used in two scoped ways during this project:

- **Understanding concepts and man pages** — clarifying the expected behaviour
  of standard functions, edge cases, and how to read the C documentation.
- **Tests and review** — generating test cases and reviewing implementations
  for edge cases and Norm compliance.

All function implementations were written and understood by the author; AI was
used as a study and verification aid, not as a code generator.
