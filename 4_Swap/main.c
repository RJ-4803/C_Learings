#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Method_1 Swap-Use temp variable
    int num1=11,num2=22,temp=num1;
    printf("Before Swap\n");
    printf("Num_1=%d\nNum_2=%d",num1,num2);
    printf("\n-------------\n");
    num1=num2;
    num2=temp;
    printf("After Swap\n");
    printf("Num_1=%d\nNum_2=%d",num1,num2);
    printf("\n-------------\n");

    //Method_2 Swap
    int num_1=55,num_2=66;
    printf("Before Swap\n");
    printf("Num_1=%d\nNum_2=%d",num_1,num_2);
    printf("\n-------------\n");
    num_2=num_1+num_2;
    num_1=num_2-num_1;
    num_2=num_2-num_1;
    printf("After Swap\n");
    printf("Num_1=%d\nNum_2=%d",num_1,num_2);
    printf("\n-------------\n");


    return 0;
}
