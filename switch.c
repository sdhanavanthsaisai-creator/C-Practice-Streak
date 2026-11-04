#include<stdio.h>
int main()
{
    int choice;
    printf("\n 1.sunday \n 2.monday \n 3.tuesday \n 4.wednesday \n 5.thursday \n 6.friday \n 7.saturday");
    printf("\n enter your choice :");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        printf("\nsunday");
        break;

        case 2:
        printf("\nmonday");
        break;

        case 3:
        printf("\ntuesday");
        break;

        case 4:
        printf("\n wedenesday");

        case 5:
        printf("\nthursday");
        break;

        case 6:
        printf("\nfriday");
        break;

        case 7:
        printf("\nsaturday");
        break;

        default:
        printf("please enter the number with in the range of (1-7)");
    }
}

