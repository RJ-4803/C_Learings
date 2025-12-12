#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,num;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=2;i<num;i++){
        if(num%i!=0){
                if(i==num-1){
                    printf("%d is a Prime",num);
                    i=num;
                }
        }
        else{
            printf("%d is not a Prime",num);
            i=num;
        }
    }
    return 0;
}
