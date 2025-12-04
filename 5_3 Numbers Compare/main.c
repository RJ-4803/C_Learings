#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
    printf("Enter the numbers\n");
    printf("Num 1:");
    scanf("%d",&num1);
    printf("Num 2:");
    scanf("%d",&num2);
    printf("Num 3:");
    scanf("%d",&num3);
    if(num1>num2){
        if(num1>num3){
            printf("%d is Greatest Number",num1);
        }
        else{
            printf("%d is Greatest Number",num3);
        }
    }
    else{
        if(num2>num3){
            printf("%d is Greatest Number",num2);
        }
        else{
            printf("%d is Greatest number",num3);
        }
    }

    return 0;
}
