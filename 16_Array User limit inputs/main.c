#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lim,i;
    printf("Enter your limit:");
    scanf("%d",&lim);
    int num[lim];
    printf("\n");
    for(i=0;i<lim;i++){
        printf("Enter the number:");
        scanf("%d",&num[i]);
    }
    printf("\nEntered numbers>>> ");
    for(i=0;i<lim;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    return 0;
}
