#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,result;
    printf("Enter a number: ");
    scanf("%d",&num1);
    printf("You have entered %d\n",num1);
    printf("Enter a number: ");
    scanf("%d",&num2);
    printf("You have entered %d\n",num2);
    result=num1+num2;
    printf("Sum of your number: %d\n",result);

    return 0;
}
