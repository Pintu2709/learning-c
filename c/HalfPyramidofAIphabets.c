#include <stdio.h>
int main()
{
    int i, j;
    char input, alphabet = 'A';
    printf("Enter an uppercase character you want to print in the last row: ");
    scanf("%c", &input);

    if (input <= 'A' || input >= 'Z')
    {
        printf("Please enter uppercase char");
        // return 0;
    }

    for (i = 1; i <= (input - 'A' + 1); ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("%c ", alphabet);
        }
        ++alphabet;
        printf("\n");
    }
    return 0;
}
