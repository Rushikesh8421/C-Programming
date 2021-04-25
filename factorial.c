#include<stdio.h>
int factorial(n)
{
    if (n == 1 || n==0)
    {
        return 1;
    }
    else
    {
        return n* factorial(n-1);
    }
    
}
int main()
{
    int n, result;
    printf("Enter the number\n");
    scanf("%d", &n);

    result = factorial(n);

    printf("The factorial of number %d is: %d\n", n, result);
}