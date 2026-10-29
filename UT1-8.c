//WAP to print Fibonacci series
#include<stdio.h>
int main()
{
    int i,n,a=0,b=1,next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i <= n; i++)
    {
        printf("%d ", a);
        next=a+b;
        a=b;
        b=next;
    }
}