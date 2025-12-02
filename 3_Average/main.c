#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2,num3,average;
    printf("Enter a number:");
    scanf("%f",&num1);
    printf("Enter a number:");
    scanf("%f",&num2);
    printf("Enter a number:");
    scanf("%f",&num3);
    average=(num1+num2+num3)/3;
    printf("Average:%f",average);

    return 0;
}
