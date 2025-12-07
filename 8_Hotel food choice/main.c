#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    printf("1-Kothu\n2-Fried Rice\n3-Briyani\n4-Hopper\n");
    printf("Enter your food number:");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        printf("Your Food is Kothu\n");
        break;
    case 2:
        printf("Your Food is Fried Rice\n");
        break;
    case 3:
        printf("Your Food is Briyani\n");
        break;
    case 4:
        printf("Your Food is Hopper\n");
        break;
    default:
        printf("Invalid Food number\n");
    }


    return 0;
}
