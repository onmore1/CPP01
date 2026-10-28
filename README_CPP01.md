# CPP01

Memory allocation, references vs pointers, and file streams.

Part of my C++ modules at [Codam](https://www.codam.nl) (42 Network), written in C++98.

**Concepts:** stack vs heap allocation, pointers and references, pointers to member functions, `switch`, file I/O.

## Exercises

| Folder | Exercise | What it does |
| --- | --- | --- |
| `ex00` | BraceYourselfBrainz | `Zombie` class created on the stack and on the heap. |
| `ex01` | Moar brainz! | Allocates a horde of zombies in a single allocation. |
| `ex02` | HI THIS IS BRAIN | Pointer and reference to the same string, compared side by side. |
| `ex03` | Unnecessary violence | `Weapon`, `HumanA` and `HumanB`: when to store a reference and when a pointer. |
| `ex04` | Sed is for losers | File search-and-replace written with `std::ifstream`/`std::ofstream`. |
| `ex05` | Harl 2.0 | `Harl` complains at different log levels, dispatched through pointers to member functions. |
| `ex06` | Harl filter | Filters Harl's messages by minimum level using a `switch`. |

## Build and run

Each exercise is self-contained. From the repository root:

```sh
cd ex00
make
./<executable>
```

`make fclean` removes the build output. Code is compiled with `-Wall -Wextra -Werror -std=c++98`.

## All modules

[CPP00](https://github.com/onmore1/CPP00) · **CPP01** · [CPP02](https://github.com/onmore1/CPP02) · [CPP03](https://github.com/onmore1/CPP03) · [CPP04](https://github.com/onmore1/CPP04) · [CPP05](https://github.com/onmore1/CPP05)
