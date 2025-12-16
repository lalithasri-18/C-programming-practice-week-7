#include <stdio.h>

int stringlength(char st[])
{
    int i, count = 0;
    for (i = 0; st[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char st[30];
    int len;

    printf("Enter your string to find the length : ");
    gets(st);

    len = stringlength(st);

    printf("The length of string = %d ", len);

    return 0;
}

