# 42 Piscine

My exercises from the **42 Piscine**, the intensive selection bootcamp of 42 school.
It covers the Shell module and C modules 00 to 07.

All C code follows the **42 Norm** (checked with `norminette`) and is
compiled with `cc -Wall -Wextra -Werror`.

## Contents

| Module | Topic | Exercises |
|--------|-------|-----------|
| **Shell00** | Shell basics | Unix commands, file permissions (`chmod`), `find`, `tar`, `ls` options, small scripts |
| **C00** | First steps in C | `write`, characters, loops, conditions, `ft_putnbr`, `ft_print_comb` |
| **C01** | Pointers | `ft_swap`, `ft_div_mod`, `ft_putstr`, `ft_strlen`, array reversal and sorting |
| **C02** | Strings | Recoding `strcpy`, `strncpy`, `strlcpy`, character checks, `ft_strcapitalize`, `ft_print_memory` |
| **C03** | More strings | Recoding `strcmp`, `strncmp`, `strcat`, `strncat`, `strstr`, `strlcat` |
| **C04** | Conversions | `ft_atoi`, `ft_putnbr_base`, `ft_atoi_base` |
| **C05** | Recursion and math | Factorial, power, Fibonacci, square root, primes, Ten Queens puzzle |
| **C06** | Program arguments | `argc` / `argv`: print, reverse and sort parameters |
| **C07** | Memory allocation | `malloc`, `ft_strdup`, `ft_range`, `ft_strjoin`, `ft_split`, `ft_convert_base` |

## Structure

```
.
├── Shell00/
│   ├── ex00/
│   └── ...
├── C00/
│   ├── ex00/
│   │   └── ft_putchar.c
│   └── ...
└── C07/
```

Each exercise lives in its own `exNN/` folder, as required by the subject.

## What I learned

- Working with the terminal and Unix permissions
- Writing C without the standard library (only `write` and `malloc`)
- Pointers, arrays and strings
- Recursion and algorithmic thinking
- Dynamic memory allocation and avoiding leaks
- Writing clean code that respects a strict norm

## Usage

Every exercise is a standalone file. To test one, write your own `main`:

```bash
cc -Wall -Wextra -Werror ex00/ft_putchar.c main.c -o test
./test
```

Check the norm with:

```bash
norminette -R CheckForbiddenSourceHeader ex00/
```

---
*Made as part of the 42 curriculum.*
