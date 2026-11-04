#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    printf("enter your name :");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0';
    if(strlen(name)==0)
    {
        printf("you didnt enter your name ");
    }
    else{
        printf("hello %s ",name);
    }
}
