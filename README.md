# PPS Lab Codes – MIT Manipal (CSE 1181)

C solutions for every week of the **Programming for Problem Solving (PPS) Lab, CSE 1181**, first semester at **MIT Manipal** (2024 batch), following the official lab manual.

Every program compiles cleanly with `gcc -Wall -Wextra` and has been tested with sample inputs.

## How to run

```bash
gcc LAB3/prime.c -o prime -lm
./prime
```

On Windows (Code::Blocks / Dev-C++), just open the `.c` file and press **Build & Run**. `-lm` is only needed for programs that use `math.h`.

## Programs by week

| Week | Topic | Programs |
|---|---|---|
| [Lab 1](LAB1) | Basics, operators, I/O | [Hello World](LAB1/hello.c) · [Sum of two integers](LAB1/sum.c) · [Arithmetic operations](LAB1/operations.c) · [ASCII value](LAB1/ascii.c) · [sizeof data types](LAB1/sizeof.c) · [Simple & compound interest](LAB1/interest.c) · [Sphere volume & area](LAB1/sphere.c) · [Fahrenheit to Celsius](LAB1/temperature.c) · [Expression evaluation](LAB1/expres.c) |
| [Lab 2](LAB2) | Branching, switch, ternary | [Odd or even](LAB2/odd.c) · [Largest of three](LAB2/largest.c) · [Smallest of three (if-else)](LAB2/smallest.c) · [Smallest of three (ternary)](LAB2/Conditional.c) · [Smallest of three (ternary v2)](LAB2/smallest_ternary.c) · [Quadratic roots (switch)](LAB2/equation.c) |
| [Lab 3](LAB3) | while / do-while loops | [Reverse & palindrome number](LAB3/palindrome.c) · [Primes between two limits](LAB3/prime.c) · [Armstrong number](LAB3/armstrong.c) · [Count primes & composites until -1](LAB3/prime_composite.c) |
| [Lab 4](LAB4) | for loops, nested loops | [Multiplication tables](LAB4/TABLES.c) · [Floyd's triangle](LAB4/floyds.c) · [Sine series](LAB4/sine_2.c) · [Perfect number](LAB4/perfect.c) |
| [Lab 5](LAB5) | 1D arrays | [Largest & smallest element](LAB5/Large_small.c) · [Bubble sort asc/desc](LAB5/sort.c) · [Primes in an array](LAB5/prime_array.c) · [Search & delete element](LAB5/deletion.c) · [Insert element](LAB5/insertion.c) |
| [Lab 6](LAB6) | 2D arrays / matrices | [Symmetric matrix](LAB6/symmetric.c) · [Trace & norm](LAB6/trace.c) · [Matrix multiplication](LAB6/matrix.c) · [Interchange rows & columns](LAB6/interchange.c) |
| [Lab 7](LAB7) | Strings | [Count words](LAB7/count.c) · [Toggle case](LAB7/case.c) · [String palindrome](LAB7/palindrome.c) · [Delete a word from a sentence](LAB7/deletion.c) |
| [Lab 8](LAB8) | Functions, recursion, structures | [Factorial & nCr](LAB8/factfun.c) · [Corner sum of a matrix](LAB8/cornersum.c) · [Recursive Fibonacci](LAB8/fib.c) · [Nested structure (student address)](LAB8/structure.c) |
| [Lab 9](LAB9) | Pointers, structures, files | [Products with pointers](LAB9/product.c) · [Sort cricket players](LAB9/cricket.c) · [File to upper case](LAB9/Upper_case.c) · [Count chars, words, lines](LAB9/count.c) · [Last n characters of a file](LAB9/last.c) |

Lab 8 and 9 questions are listed in [LAB 8 AND LAB 9.txt](<LAB 8 AND LAB 9.txt>). The Lab 9 file programs read `rak.txt` / `lines.txt` from the same folder, so run them from inside `LAB9`.

## Contributing

Found a bug or have a cleaner solution? Open an issue or a pull request. If this helped you, a ⭐ helps other students find it.
