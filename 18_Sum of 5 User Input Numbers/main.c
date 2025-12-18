#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0,num[5];
    printf("Enter 5 numbers\n");
    for(i=0;i<5;i++){
        printf("Number %d:",i+1);
        scanf("%d",&num[i]);
        sum=sum+num[i]
        printf("Current Sum:%d\n\n",sum);
    }
    printf("\nSum of 5 numbers is:%d\n",sum);
    return 0;
}
