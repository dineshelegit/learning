#include <stdio.h>
#include <ncurses.h>//<conio.h> // for getch(), clrscr()

int main() {
    clrscr();  // clear the console screen

    printf("Hello, Welcome to conio.h functions!\n");

    printf("Press any key to exit...");
    getch();   // waits for a key press

    return 0;
}

