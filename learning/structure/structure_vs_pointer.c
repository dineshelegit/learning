/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* firstname;
    char* lastname;
    char* title;
    unsigned int age;
} person;

int main() {
    person people;
    people.firstname = (char*)malloc(strlen("Raja") + 1);
    strcpy(people.firstname, "Raja");
    people.age = 34;
    printf("Normal name %s and age %d\n", people.firstname, people.age);

    person *ptrpeople = (person*)malloc(sizeof(person));
    ptrpeople->firstname = (char*)malloc(strlen("Raja") + 1);
    strcpy(ptrpeople->firstname, "Raja");
    ptrpeople->age = 34;
    printf("Pointer name %s and age %d\n", ptrpeople->firstname, ptrpeople->age);

    free(people.firstname);
    free(ptrpeople->firstname);
    free(ptrpeople);

    return 0;
}
*/

#include<stdio.h>
struct complex
{
	float real;
	float imag;
};

void add (struct complex *x, struct complex *y,struct complex *t)
{
	t->real=x->real+y->real;
	t->imag=x->imag+y->imag;
}
int main()
{
	struct complex a,b,c;
	scanf("%f %f",&a.real,&a.imag);
	scanf("%f %f",&b.real,&b.imag);
	add(&a,&b,&c);
	printf("%f %f\n",c.real,c.imag);	
}

