//WAP to find the simple interest
#include <stdio.h>
int main()
{
    int p,t,r,si,i;
    printf("Enter the principle amount:");
    scanf("%d",&p);
    printf("\nEnter the rate of interest:");
    scanf("%d",&r);
    printf("\nEnter the time period:");
    scanf("%d",&t);

    i=p*r*t;
    si=i/100;

    printf("\nThe simple interest is:%d",si);
}