
#include<stdio.h>
int main()
{
    int choice=0;
    printf("Pick any  Food Item : \n1.Pizza\n2.Burger\n3.Pasta\n4.French Fries\n5.Sandwich\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Pizza");
            printf("\nRs239");
            break;
        case 2:
            printf("Burger");
            printf("\nRs129");
            break;
        case 3:
            printf("Pasta");
            printf("\nRs179");
            break;
        case 4:
            printf("French Fries");
            printf("\nRs99");
            break;
        case 5:
            printf("Sandwich");
            printf("\nRs149");
            break;
        default:
            printf("Invalid Input");

    }
    return 0;
}
