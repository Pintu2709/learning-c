#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i <= 5; i++)
        ;

    {
        for (j = 1; j <= 10; j++)
            ;
    }

    {
        printf("%d\n", i, j);
        {
            printf("\n");
        }
    }
}