#include<stdio.h>
#include<stdbool.h>
bool ageif(int age)
{
    if(age>=18)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int age;
    printf("enter the your age :");
    scanf("%d",&age);
    if(ageif(age))
    {
        printf("you can sign-up");
    }
    else
    {
        printf("you must be +18 to sign up");
    }
    return 0;
}
