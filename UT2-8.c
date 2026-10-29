//WAP to interchange 2 values
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("A: %d\nB: %d",a,b);
}