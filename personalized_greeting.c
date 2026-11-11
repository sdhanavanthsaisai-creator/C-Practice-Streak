#include <stdio.h>
#include<string.h>
void hello(char name[] , int age);
int main()
{
    char name[50];
    int age;
    printf("enter your name :");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0';
    printf("enter your age :");
    scanf("%d",&age);
    hello(name,age);


}

void hello(char name[] , int age)
{
    printf(" hello %s ",name);
    printf("\n your age is %d",age);
}
