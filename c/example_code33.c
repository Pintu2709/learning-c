#include <stdio.h>

int main()
{
    int grades[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("grades[%d]=%d\n", i, grades[i]);
    }
    printf("grades[5]=%d/n", grades[5]);
    printf("grades[500]=%d\n", grades[500]);
    return 0;
}