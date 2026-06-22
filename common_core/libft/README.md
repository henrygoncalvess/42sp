_This project has been created as part of the 42 curriculum by hegoncal._

# libft

## Description

**libft** is my own implementation of a C library, the first project of the
42 common core. The goal is to reimplement a set of standard C library
functions, plus a few extra utility functions, and bundle them into a static
library (`libft.a`) that can be reused in later projects throughout the cursus.

Beyond reproducing the behaviour of well-known libc functions, the project is an
exercise in memory management, pointer manipulation, edge-case handling and
strict coding-style discipline (the 42 "Norm"). Once compiled, the resulting
archive becomes a personal toolbox linked into nearly every subsequent C
project at the school.

This work was developed at [42 São Paulo](https://www.42sp.org.br/), the first
campus of the 42 network in Latin America — a tuition-free, peer-to-peer software
engineering school with no teachers and no formal classes, where students learn
by solving progressively harder projects.

### The Library

All functions are prefixed with `ft_` and declared in `libft.h`. They are
grouped below by purpose.

#### Character classification & case

Predicates that test a single character (`ft_isalpha`, `ft_isdigit`,
`ft_isalnum`, `ft_isascii`, `ft_isprint`) and case converters
(`ft_toupper`, `ft_tolower`).

#### Memory manipulation

Low-level memory helpers: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
(overlap-safe), `ft_memchr`, `ft_memcmp` and `ft_calloc` (zero-initialised
allocation).

#### String manipulation

Core string operations mirroring libc: `ft_strlen`, `ft_strdup`,
`ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp` and
`ft_strnstr`.

#### Conversions

`ft_atoi` (string → int) and `ft_itoa` (int → freshly allocated string).

#### Additional string helpers

Higher-level allocating helpers that go beyond standard libc: `ft_substr`,
`ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi` and `ft_striteri`.

#### File-descriptor output

Write primitives to any file descriptor: `ft_putchar_fd`, `ft_putstr_fd`,
`ft_putendl_fd` and `ft_putnbr_fd`.

#### Bonus: linked list

A generic singly linked list built on the node type:

```c
typedef struct s_list
{
    void          *content;
    struct s_list *next;
}   t_list;
```

Functions to create and manage it: `ft_lstnew`, `ft_lstadd_front`,
`ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`,
`ft_lstiter` and `ft_lstmap`.

## Instructions

Clone the repository and build the library with `make`:

```sh
git clone <repository-url> libft
cd libft
make
```

This produces the static library `libft.a` in the project root.

Available Makefile rules:

| Rule          | Description                                |
| ------------- | ------------------------------------------ |
| `make`        | Build `libft.a` (default `all` rule).      |
| `make clean`  | Remove the object (`.o`) files.            |
| `make fclean` | Remove the object files **and** `libft.a`. |
| `make re`     | Rebuild everything from scratch.           |

The library is compiled with `cc -Wall -Wextra -Werror`.

### Using libft in your own project

Place `libft.a` and `libft.h` where your project can reach them, include the
header, and link against the archive:

```c
#include "libft.h"

int main(void)
{
    ft_putstr_fd("Hello from libft!\n", 1);
    return (0);
}
```

```sh
cc main.c libft.a -o my_program
```

## Resources

Classic references used while building this library:

- **man pages** — `man 3 string`, `man 3 memcpy`, `man 3 atoi`, etc., the
  primary source for each function's required behaviour and prototype.
- **The 42 Norm** — the school's mandatory coding-style standard.

### Use of AI

AI assistance was used in two scoped ways during this project:

- **Understanding concepts and man pages** — clarifying the expected behaviour
  of standard functions, edge cases, and how to read the C documentation.
- **Tests and review** — generating test cases and reviewing implementations
  for edge cases and Norm compliance.

All function implementations were written and understood by the author; AI was
used as a study and verification aid, not as a code generator.
