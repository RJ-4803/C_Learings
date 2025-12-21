#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[100];
    char tnx[50]="Thanks for your input";
    printf("Enter your name:");
    scanf("%s",name);
    printf("%s\n",tnx);
    printf("Your name is %s\n",name);
    return 0;
}
