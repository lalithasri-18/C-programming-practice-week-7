#include <stdio.h>

void uppertolower(char st[])
{
    int i;

    for (i = 0; st[i] != '\0'; i++)
    {
        if (st[i] >= 'A' && st[i] <= 'Z')
        {
            st[i] = st[i] + 32;
        }
    }
}

int main()
{
    char st[100];

    printf("Enter the string: ");
    gets(st);

    uppertolower(st);

    printf("String in lowercase = %s\n", st);

    return 0;
}

