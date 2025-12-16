#include <stdio.h>

void copystring(char st1[], char st2[])
{
    int i;

    for (i = 0; st1[i] != '\0'; i++)
    {
        st2[i] = st1[i];
    }
    st2[i] = '\0';
}

int main()
{
    char st1[30], st2[30];

    printf("Enter the first string: ");
    gets(st1);

    copystring(st1, st2);

    printf("The copied string = %s\n", st2);

    return 0;
}

