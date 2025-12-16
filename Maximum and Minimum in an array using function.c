#include <stdio.h>

int findmax(int a[], int n)
{
    int i, max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int findmin(int a[], int n)
{
    int i, min = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}

int main()
{
    int a[100], n, i, max, min;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("Enter the elements : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = findmax(a, n);
    min = findmin(a, n);

    printf("Maximum number = %d\n", max);
    printf("Minimum number = %d", min);

    return 0;
}

