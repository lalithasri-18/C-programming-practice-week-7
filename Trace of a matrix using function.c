#include <stdio.h>

int trace(int a[30][30], int r)
{
    int i, sum = 0;

    for (i = 0; i < r; i++)
    {
        sum = sum + a[i][i];
    }

    return sum;
}

int main()
{
    int a[30][30], i, j, r, c, t;

    printf("Enter the number of rows and columns of matrix respectively:\n");
    scanf("%d%d", &r, &c);

    if (r != c)
    {
        printf("Trace is not possible.\n");
        return 0;
    }

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    t = trace(a, r);

    printf("The trace of the matrix = %d\n", t);

    return 0;
}

