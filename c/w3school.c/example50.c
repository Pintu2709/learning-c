#include <stdio.h>

int main()
{
    int myNumbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    int number;
    scanf("%i", &number);

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", myNumbers[i] * 2);
    }

    return 0;
}