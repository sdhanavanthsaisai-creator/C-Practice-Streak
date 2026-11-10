#include<stdio.h>
#include<string.h>

void happyborn(char name[], int age){
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s!", name);
    printf("\nHappy birthday to you!");
    printf("\nYou are %d years old!\n", age);
}

int main()
{
    char name[30];
    int age;
    printf("enter your name :");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';
    printf("enter your age :");
    scanf("%d", &age);
    happyborn(name, age);
    happyborn(name, age);
    happyborn(name, age);
    return 0;
}
