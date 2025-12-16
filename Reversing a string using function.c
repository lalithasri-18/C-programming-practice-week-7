#include <stdio.h>

void reverse(char st[], char rev[])
{
    int i, len = 0, j = 0;

    for (i = 0; st[i] != '\0'; i++)
    {
        len++;
    }

    for (i = len - 1; i >= 0; i--)
    {
        rev[j] = st[i];
        j++;
    }
    rev[len] = '\0';
}

int main()
{
    char st[30], rev[30];

    printf("Enter your string to reverse: ");
    gets(st);

    reverse(st, rev);

    printf("The reversed string = %s\n", rev);

    return 0;
}

