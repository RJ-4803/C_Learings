#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,total=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        total=total+i;
    }
    printf("Total is %d\n",total);

    return 0;
}
