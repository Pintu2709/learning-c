#include <stdio.h>
int main()
{
    int grades[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        grades[i] = i + 1;
    }
    grades[5] = 999;
    grades[500] = 12345;
    for (i = 0; i < 6; i++)
    {
        printf("grades[%d]=%d\n", i, grades[i]);
    }
    printf("grades[500]=%d\n", grades[500]);
    return 0;
}