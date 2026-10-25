# CPP Module 04

Subtype polymorphism, abstract classes and deep copies — including a demonstration of what goes wrong without `virtual`.

> Part of the **42 school curriculum**. Built by **Arda Aycan**.

## Exercises

| Exercise | Binary | What it demonstrates |
| --- | --- | --- |
| `ex00` | `polymorphism` | `Animal`, `Cat` and `Dog` with virtual functions, next to `WrongAnimal`/`WrongCat` without one, so the missing dispatch is visible. |
| `ex01` | `i_dont_want_to_set_the_world_on_fire` | Adds a heap-allocated `Brain` to each animal and implements deep copies in the canonical form. |
| `ex02` | `abstract_class` | Makes `Animal` abstract (pure virtual) so it can no longer be instantiated. |

## Build and run

Every exercise has its own Makefile and produces its own binary:

```bash
make -C ex00
./ex00/polymorphism
```

`make fclean -C <exercise>` removes the binary again.

## Notes

- C++98, `-Wall -Wextra -Werror`.
- `ex01` exists to show that a shallow copy leaves two animals sharing one brain.

## Author

**Arda Aycan** ([@EpicYamo](https://github.com/EpicYamo)).
