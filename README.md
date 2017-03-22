<img src="https://www.holbertonschool.com/assets/holberton-logo-1cc451260ca3cd297def53f2250a9794810667c7ca7b5fa5879a569a457bf16f.png" alt="Holberton logo">
# printf
## Author: Bobby Yang && Elaine Yeung (Batch 2)

## Synopsis
This is a custom implementation of `printf` from the standard library `<stdio.h>`.

![image](https://cloud.githubusercontent.com/assets/23224088/24168852/ea80a146-0e38-11e7-881c-97735fbb91c7.jpg)
## Project Breakdown
| Task # | Type | Short description |
| ---: | --- | --- |
|0 | **Mandatory**     | Write a function that produces output according to a format. |
|1 | **Mandatory**     | Handle the following conversion specifiers: `d` `i` |
|2 | **Mandatory** | [Create a man page for your function.](./man_3_printf)
|3 | *Advanced* | Handle the following custom conversion specifiers: <br>`b` the unsigned int argument is converted to binary |
|4 | *Advanced* | Handle the following conversion specifiers: <br> `u`, `o`, `x`, `X`|
|5 | *Advanced* | Use a local buffer of 1024 chars in order to call write as little as possible.|
|6 | *Advanced* | Handle the following custom conversion specifier: <br>`S` |
|7 | *Advanced* | Handle the following conversion specifier: <br>`p`|
|8 | *Advanced* |Handle the following flag characters for non-custom conversion specifiers:<br>`+`, ` ` (space), `#` |
|9 | *Advanced* |Handle the following length modifiers for non-custom conversion specifiers:<br>`l`, `h`<br><br>Conversion specifiers to handle: `d`, `i`, `u`, `o`, `x`, `X` |
|10 | *Advanced* |Handle the field width for non-custom conversion specifiers. |
|11 | *Advanced* | Handle the precision for non-custom conversion specifiers. |
|12 | *Advanced* | Handle the `0` flag character for non-custom conversion specifiers.|
|13 | *Advanced* | Handle the `-` flag character for non-custom conversion specifiers.|
|14 | *Advanced* |Handle the following custom conversion specifier:<br>`r` : prints the reversed string |
|15 | *Advanced* |Handle the following custom conversion specifier:<br>`R`: prints the rot13'ed string |
|16 | *Advanced* |All the above options work well together. |



| Command | Description |
| --- | --- |
| `git status` | List all *new or modified* files |
| `git diff` | Show file differences that **haven't been** staged |


## Using
```bash
gcc -Werror -Wextra -pedantic test/test.c _printf.c formatters.c _putchar.c _strlen\
.c _strcopy.c -o printf

./printf
```

For this command you will need to be in the `root` project folder, not the `main` f\
older. As you'll be compiling the `main/0-main.c` file in the `main` folder and the\
 `0-sum_them_all.c` file in the current directory.

## History
The Game of Thrones references throughout this project can be traced back to this message on slack:
![image](https://cloud.githubusercontent.com/assets/23224088/24180640/43ada0a4-0e73-11e7-8ee3-95a78aa7da2f.png)
##
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
- [x] Returns: the number of characters printed (excluding the null byte used to en\
d output to strings)

- [ ] Get [@Julien Barbier](https://github.com/jbarbier) to say I did a good job ;)