#include <stdio.h>

int main()
{
    int grades[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        grades[i] = i + 1;
    }
    for (i = 0; i < 5; i++)
    {
        printf("grades[%s]=%d\n", i, grades[i]);
    }
    return 0;
}