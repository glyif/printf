<img src="https://www.holbertonschool.com/assets/holberton-logo-1cc451260ca3cd297def53f2250a9794810667c7ca7b5fa5879a569a457bf16f.png" alt="Holberton logo">

# printf
## Author: Bobby Yang && Elaine Yeung (Batch 2)

## Synopsis
This is a custom implementation of `printf` from the standard library `<stdio.h>`.

## File Breakdown

## Using
```bash
gcc -Werror -Wextra -pedantic test/test.c _printf.c formatters.c _putchar.c _strlen.c _strcopy.c -o printf

./printf
```

For this command you will need to be in the `root` project folder, not the `main` folder. As you'll be compiling the `main/0-main.c` file in the `main` folder and the `0-sum_them_all.c` file in the current directory.

## TODO
### Handle the following conversion specifiers:
- [x] c - `char`
- [x] s - `string`
- [ ] % - `percent`
- [x] d - `decimal`
- [x] i - `integer`
- [x] b - `binary`

### Base Printf
- [ ] Write output to stdout, the standard output stream
- [x] Returns: the number of characters printed (excluding the null byte used to end output to strings)

- [ ] Get [@Julien Barbier](https://github.com/jbarbier) to say I did a good job ;)
