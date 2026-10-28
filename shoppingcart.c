#include <stdio.h>
int main()
{
    int quantity=0;
    float price=0.0f;
    char item[50]="";
    float total=0.0f;
    printf("enter the item name : ");
    fgets(item,sizeof(item),stdin);
    printf("what is the price of the item : ");
    scanf("%f",&price);
    printf("enter the quantity of the item : ");
    scanf("%d",&quantity);
    total=quantity*price;
    printf("u have bought %s in the quantity of %d and the total price is : %.2f ",item,quantity,total);
    return 0;
}
