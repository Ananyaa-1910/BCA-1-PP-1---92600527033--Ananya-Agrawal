//WAP to find find total amt
#include <stdio.h>
int main()
{
    int q,p,d,t,a;
    printf("Enter the quantity: ");
    scanf("%d",&q);
    printf("\nEnter the price: ");
    scanf("%d",&p);
    printf("\nEnter the discount: ");
    scanf("%d",&d);

    a=q*p;
    t=(a*d)/100;
    printf("\nThe total amt is: %d",t);
}