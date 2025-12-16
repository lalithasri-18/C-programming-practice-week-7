#include <stdio.h>

void lowertoupper(char st[])
{
    int i;

    for (i = 0; st[i] != '\0'; i++)
    {
        if (st[i] >= 'a' && st[i] <= 'z')
        {
            st[i] = st[i] - 32;
        }
    }
}

int main()
{
    char st[100];

    printf("Enter the string: ");
    gets(st);

    lowertoupper(st);

    printf("String in uppercase = %s\n", st);

    return 0;
}

