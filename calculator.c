#include<stdio.h>
int main()
{
    double num1;
    double num2;
    char operator;
    double result;
    printf("enter the first number :");
    scanf("%ld",&num1);
    printf("enter the second number :");
    scanf("%ld",&num2);
    printf("enter the operator ( + - * /): ");
    scanf(" %c",&operator);
    switch(operator){
        case '+':
        result=num1+num2;
        break;
        case '-':
        result=num1-num2;
        break;
        case '*':
        result=num1*num2;
        break;
        case '/':
        result=num1/num2;
        break;
    }
    printf("\n the result is %ld",result);
}

