#include <stdio.h>
#include <stdlib.h>

int sum();
int main()
{   int fn;
    fn=sum();
    printf("%d",fn);


    return 0;
}
int sum(){
    int a,b,c;
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}
