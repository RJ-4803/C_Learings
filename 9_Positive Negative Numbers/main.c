#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num>0){
        printf("Number %d is Positive\n",num);
    }
    else{
        printf("Number %d is Negative\n",num);
    }
    return 0;
}
