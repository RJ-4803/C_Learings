#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[5],i;
    for(i=0;i<5;i++){
        printf("Enter number:");
        scanf("%d",&num[i]);
    }
    printf("\nEntered Numbers>>> ");
    for(i=0;i<5;i++){
        printf("%d ",num[i]);
    }
    printf("\n");

    return 0;
}
