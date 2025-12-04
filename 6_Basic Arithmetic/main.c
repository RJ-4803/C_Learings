#include <stdio.h>
#include <stdlib.h>

int main()
{
   float num1,num2;
    char ar;
    printf("Enter the numbers & arithmetic Function(+|-|*|/)\n");
    printf("Num 1:");
    scanf("%f",&num1);
    printf("Num 2:");
    scanf("%f",&num2);
    printf("Arithmetic:");
    scanf(" %c",&ar);
    if(ar=='+'){
        printf("Answer is %f\n",num1+num2);
    }
    else if(ar=='-'){
        printf("Answer is %f\n",num1-num2);
    }
    else if(ar=='*'){
        printf("Answer is %f\n",num1*num2);
    }
    else if(ar=='/'){
            if(num2==0){
                printf("Answer is Infinite\n");
            }
            else{
                printf("Answer is %f\n",num1/num2);
            }
    }
    else{
        printf("You are entered invalid input\n");
    }

    return 0;
}
