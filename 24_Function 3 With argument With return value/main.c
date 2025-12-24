#include <stdio.h>
#include <stdlib.h>

int sum(int,int);
int main()
{
    int a,b,fn;

    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);

    fn=sum(a,b);

    printf("%d",fn);

    return 0;
}
int sum(int num1,int num2){
    int c;
    c=num1+num2;
    return c;
}
