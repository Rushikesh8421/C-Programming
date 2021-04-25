// code By: Rushikesh Patil;
// A bubbel sort concept explained in this c-programme;

#include<stdio.h>

int main()
{
    int a[10], n, temp, result[10];
    printf("Enter the no of arry elements\n");
    scanf("%d", &n);
    printf("Enter the array elements to be sorted:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            
        }
        
    }
    printf("The sorted array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    
    
}









