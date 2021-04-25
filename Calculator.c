#include<stdio.h>

int main()
{
    char operator;
    double b, c;
    printf("Choose the operator you would like to use(*,+,-,/): ");
    scanf("%c",&operator);
    printf("Enter the value of b\n");
    scanf("%lf",&b);
    printf("Enter the value of c\n");
    scanf("%lf",&c);
    switch (operator)
    {
    case '+': 
        printf("%.1lf + %.1lf = %.1lf\n", b, c, b+c);
        break;
    case '-':
        printf("%.1lf - %.lf = %.1lf\n", b, c, b-c);
        break;    
    case '*':
        printf("%.1lf * %.1lf = %.1lf\n", b, c, b*c);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf\n", b, c, b/c);
        break;
    default:
        printf("Opps! operator does not match");
    }
    return 0;
}
