#ifndef COLOR_H
#define COLOR_H

#include <stdio.h>
#include <stdarg.h>

// Define ANSI color codes
#define RED 1
#define GREEN 2
#define YELLOW 3
#define BLUE 4
#define MAGENTA 5 
#define CYAN 6
#define WHITE 0 
#define RESET 0

// Bold text colors
#define BOLD_RED 10  
#define BOLD_GREEN 20  
#define BOLD_YELLOW 30
#define BOLD_BLUE 50    
#define BOLD_MAGENTA 60 
#define BOLD_CYAN 70    
#define BOLD_WHITE 0   

// Italic text colors
#define ITALIC_RED 100  
#define ITALIC_GREEN 200 
#define ITALIC_YELLOW 300  
#define ITALIC_BLUE 400
#define ITALIC_MAGENTA 500 
#define ITALIC_CYAN 600    
#define ITALIC_WHITE 0  

void printc(int colorCode, const char *format, ...);
void printcb(int colorCode, const char *format, ...);
void printci(int colorCode, const char *format, ...);
void printcu(int colorCode, const char *format, ...);
void printcd(int colorCode, const char *format, ...);
void printcm(int colorCode, const char *format, ...);

const char *get_color(int colorCode);
const char *get_bold_color(int colorCode);
const char *get_italic_color(int colorCode);
const char *get_underline_color(int colorCode);
const char *get_disco_color(int colorCode);
const char *get_mark_color(int colorCode);


void printc(int colorCode, const char *format, ...) {
    va_list args;
    va_start(args, format);
    printf("%s",get_color(colorCode));
    vprintf(format, args); // Use vprintf to pass the variable arguments
    printf("\x1B[0m");

    va_end(args);
}

void printcb(int colorCode, const char *format, ...) {
    va_list args;
    va_start(args, format);
    
    printf("%s",get_bold_color(colorCode));
    vprintf(format, args); // Use vprintf to pass the variable arguments
    printf("\x1B[0m");

    va_end(args);
}

void printci(int colorCode, const char *format, ...) {
    va_list args;
    va_start(args, format);
    
    printf("%s",get_italic_color(colorCode));
    vprintf(format, args); // Use vprintf to pass the variable arguments
    printf("\x1B[0m");

    va_end(args);
}

void printcu(int colorCode, const char *format, ...) {
    va_list args;
    va_start(args, format);
    
    printf("%s",get_underline_color(colorCode));
    vprintf(format, args); // Use vprintf to pass the variable arguments
    printf("\x1B[0m");

    va_end(args);
}

void printcd(int colorCode, const char *format, ...) {
    va_list args;
    va_start(args, format);
    
    printf("%s",get_disco_color(colorCode));
    vprintf(format, args); // Use vprintf to pass the variable arguments
    printf("\x1B[0m");

    va_end(args);
}

void printcm(int colorCode, const char *format, ...) {
    va_list args;
    va_start(args, format);
    
    printf("%s",get_mark_color(colorCode));
    vprintf(format, args); // Use vprintf to pass the variable arguments
    printf("\x1B[0m");

    va_end(args);
}


const char *get_color(int colorCode)
{
        switch (colorCode) {
            case RED:
                return "\x1B[31m";
            case GREEN:
                return "\x1B[32m";
            case YELLOW:
                return "\x1B[33m";
            case BLUE:
                return "\x1B[34m";
            case MAGENTA:
                return "\x1B[35m";
            case CYAN:
                return "\x1B[36m";
            case WHITE:
                return "\x1B[37m";
            default:
                return "\x1B[0m";
    }
}



const char *get_bold_color(int colorCode)
{
        switch (colorCode) {
            case RED:
                return "\x1B[1;31m";
            case GREEN:
                return "\x1B[1;32m";
            case YELLOW:
                return "\x1B[1;33m";
            case BLUE:
                return "\x1B[1;34m";
            case MAGENTA:
                return "\x1B[1;35m";
            case CYAN:
                return "\x1B[1;36m";
            case WHITE:
                return "\x1B[1;37m";
            default:
                return "\x1B[1;37m";
    }
}


const char *get_italic_color(int colorCode)
{
        switch (colorCode) {
            case RED:
                return "\x1B[3;31m";
            case GREEN:
                return "\x1B[3;32m";
            case YELLOW:
                return "\x1B[3;33m";
            case BLUE:
                return "\x1B[3;34m";
            case MAGENTA:
                return "\x1B[3;35m";
            case CYAN:
                return "\x1B[3;36m";
            case WHITE:
                return "\x1B[3;37m";
            default:
                return "\x1B[3;37m";
    }

}

const char *get_underline_color(int colorCode)
{
        switch (colorCode) {
            case RED:
                return "\x1B[4;31m";
            case GREEN:
                return "\x1B[4;32m";
            case YELLOW:
                return "\x1B[4;33m";
            case BLUE:
                return "\x1B[4;34m";
            case MAGENTA:
                return "\x1B[4;35m";
            case CYAN:
                return "\x1B[4;36m";
            case WHITE:
                return "\x1B[4;37m";
            default:
                return "\x1B[4;37m";
    }

}

const char *get_disco_color(int colorCode)
{
        switch (colorCode) {
            case RED:
                return "\x1B[5;31m";
            case GREEN:
                return "\x1B[5;32m";
            case YELLOW:
                return "\x1B[5;33m";
            case BLUE:
                return "\x1B[5;34m";
            case MAGENTA:
                return "\x1B[5;35m";
            case CYAN:
                return "\x1B[5;36m";
            case WHITE:
                return "\x1B[5;37m";
            default:
                return "\x1B[5;37m";
    }

}


const char *get_mark_color(int colorCode)
{
        switch (colorCode) {
            case RED:
                return "\x1B[7;31m";
            case GREEN:
                return "\x1B[7;32m";
            case YELLOW:
                return "\x1B[7;33m";
            case BLUE:
                return "\x1B[7;34m";
            case MAGENTA:
                return "\x1B[7;35m";
            case CYAN:
                return "\x1B[7;36m";
            case WHITE:
                return "\x1B[7;37m";
            default:
                return "\x1B[7;37m";
    }
    
}

#endif

