#include<stdio.h>
int main()
{
    double num1;
    double num2;
    char operator;
    double result;
    printf("enter the first number :");
    scanf("%lf",&num1);
    printf("enter the second number :");
    scanf("%lf",&num2);
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
         if(num2==0){
            printf("it is invalid");
            return 0;
        }
        else
        {
        result=num1/num2;
        }
        break;
    }
    printf("\n the result is %lf",result);
}
