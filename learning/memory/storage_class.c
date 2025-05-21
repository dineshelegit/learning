/*
//Auto Variable
#include <stdio.h>

void demoAuto() {
    auto int a = 10;  // auto keyword // auto and local variable same 
    printf("Auto variable a = %d\n", a);
}

int main() {
    demoAuto();
    return 0;
}
*/
/*
//Register Variable

#include <stdio.h>

void demoRegister() {
    register int speed = 100;
    printf("Register variable speed = %d\n", speed);
}

int main() {
    demoRegister();
    return 0;
}
*/

//static Variable
/*
#include <stdio.h>
static int count = 0; // global to this file.c
void demoStatic() {
    //static int count = 0; // local to function 
    count++;
    printf("Static count = %d\n", count);
}
void demoStatic1() {
    count++;
    printf("Static count = %d\n", count);
}

int main() {
    demoStatic(); // 1
    demoStatic(); // 2
    demoStatic(); // 3
    demoStatic1();//4
    count = 6;
    demoStatic1();
    return 0;
}xxxxxxxxxxxxxx
*/

#include <stdio.h>

extern int global; // declaration (no memory allocation)
extern void showGlobal();
int main() {
    printf("Accessing extern global = %d\n", global);
    showGlobal();
    return 0;
}

