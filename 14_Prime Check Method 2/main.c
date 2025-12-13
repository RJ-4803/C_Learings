#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,flag=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=2;i<num;i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Prime\n");
    }
    else{
        printf("Not a Prime\n");
    }
    return 0;
}
