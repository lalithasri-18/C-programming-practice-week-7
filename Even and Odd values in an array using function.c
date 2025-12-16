#include <stdio.h>

void evenoddvalues(int a[], int n)
{
    int i;

    printf("Even values are:\n");
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            printf("%d ", a[i]);
    }

    printf("\nOdd values are:\n");
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
            printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int a[100], n, i;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("Enter the elements : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    evenoddvalues(a, n);

    return 0;
}

