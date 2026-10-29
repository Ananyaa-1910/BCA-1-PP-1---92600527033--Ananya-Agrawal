//WAP to take 2 values and perform all arithematic performances
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two values: ");
    scanf("%d%d",&a,&b);

    printf("\nAddition:");
    printf("%d",a+b);

    printf("\nSubstraction:");
    printf("%d",a-b);

    printf("\nMultiplication:");
    printf("%d",a*b);

    printf("\nDivision:");
    printf("%d",a/b);
}