//WAP to calculate square and cube
#include<stdio.h>

int main()
{
    int a,sq,cu;
    printf("enter a number: ");
    scanf("%d",&a);
    
    sq=a*a;
    cu=sq*a;

    printf("The square is: %d\nThe cube is: %d",sq,cu);
}