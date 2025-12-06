#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    printf("Enter the numbers\n");
    printf("Num 1:");
    scanf("%d",&num1);
    printf("Num 2:");
    scanf("%d",&num2);
    if(num1>num2){
        printf("%d is greater than %d",num1,num2);
    }
    else{
        printf("%d is greater than %d",num2,num1);
    }
    return 0;
}
