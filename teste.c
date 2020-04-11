#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <ctype.h>

typedef struct Person{
    char name[50];
    int age;
    char gender;
} person;

char* get_gender(char gender);

int main(){

    person p;

    printf("Enter your name: ");
    scanf("%s", p.name);
    
    printf("Enter your age: ");
    scanf("%i", &p.age);

    __fpurge(stdin);

    printf("Enter your gender: ");
    scanf("%c", &p.gender);

    printf("\nYour name is %s and you're %i years old", p.name, p.age);
    printf("\nYour gender is %s\n", get_gender(p.gender));

    return 0;
}

char* get_gender(char gender){
    gender = toupper(gender);

    if (gender == 'M')
        return "Male";
    else if (gender == 'F')
        return "Female";
    return "Undefined";
}