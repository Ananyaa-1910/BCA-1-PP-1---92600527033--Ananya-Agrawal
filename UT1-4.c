//WAP to take 3 values and find its average
#include<stdio.h>

int main()
{
    int a,b,c,avg;
    printf("enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    
    avg=(a+b+c)/3;

    printf("The average is: %d",avg);
} 