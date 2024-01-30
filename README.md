
# Color Print Library

The Color Print Library is a C language utility that allows for colored text output in terminal applications. It provides functions for printing text in various colors and styles, including bold, italic, and underlined text.

## Files

- `color.c`: Implementation of the color print functions.
- `color.h`: Header file with function declarations and color definitions.
- `test.c`: Example usage of the color print functions.

## Usage

To use the Color Print Library, include `color.h` in your C program and link against `color.c` during compilation.

### Functions

- `void printc(int colorCode, const char *format, ...)`: Prints text in the specified color.
- `void printcb(int colorCode, const char *format, ...)`: Prints bold text in the specified color.
- `void printci(int colorCode, const char *format, ...)`: Prints italic text in the specified color.
- `void printcu(int colorCode, const char *format, ...)`: Prints underlined text in the specified color.
- `void printcd(int colorCode, const char *format, ...)`: Prints 'disco' style text in the specified color.
- `void printcm(int colorCode, const char *format, ...)`: Prints 'mark' style text in the specified color.

### Color Codes

- Red, Green, Yellow, Blue, Magenta, Cyan, White
- Bold, Italic, and Underline versions are available for each color.

## Compilation

Compile your program with `color.c` and include `color.h` in your source file. For example:

```sh
gcc -o myprogram test.c color.c
```

![Example Image](examples.png)


