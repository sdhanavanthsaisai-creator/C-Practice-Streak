#include<stdio.h>
int square(int num1)
{
    int result;
    result=num1*num1;
    return result;

}
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    square(num);
    int output =square(num);
    printf("the square of the %d is %d",num,output);

}
