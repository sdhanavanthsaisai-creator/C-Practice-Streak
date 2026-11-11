#include<stdio.h>
int great(int num1, int num2)
{
    if(num1>num2 && num1!=num2)
    {
        return num1;
    }
    else if ( num1<num2 && num1!=num2)
    {
         return num2;

    }
    else{
        printf("%d = %d , so both the values are equale",num1,num2);
        return 0;
    }
}
int main(){
    int num1 , num2;
    printf("enter the value of num1 : ");
    scanf("%d",&num1);
    printf("enter the value of- num2 : ");
    scanf("%d",&num2);
    int x =great(num1,num2);
    printf(" the greater number is : %d",x);
    return 0;
}
