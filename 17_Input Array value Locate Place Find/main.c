#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num[5],srch;
    printf("Enter 5 Numbers\n");
    for(i=0;i<5;i++){
        printf("Number %d:",i+1);
        scanf("%d",&num[i]);
    }
    printf("\nWhich number location you find:");
    scanf("%d",&srch);
    for(i=0;i<5;i++){
        if(srch==num[i]){
            printf("Location of %d is %d\n",srch,i+1);
            break;
        }
    }
    return 0;
}
