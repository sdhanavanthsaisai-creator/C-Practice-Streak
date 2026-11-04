#include<stdio.h>
#include<ctype.h>
int main()
{
    char unit;
    double weight;
    double convertedWeight;
    printf("enter c for kg to lbs or f for lbs to kg : ");
    scanf(" %c",&unit);
    unit=toupper(unit);
    if(unit=='C')
    {
        printf("enter weight in kg : ");
        scanf("%lf",&weight);
        convertedWeight=weight*2.20462;
        printf("weight in lbs : %lf",convertedWeight);
    }
    else if(unit=='F')
    {
        printf("enter weight in lbs : ");
        scanf("%lf",&weight);
        convertedWeight=weight/2.20462;
        printf("weight in kg : %lf",convertedWeight);
    }
    else{
        printf("invalid choice");
    }
}
