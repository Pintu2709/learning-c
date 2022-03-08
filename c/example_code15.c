#include <stdio.h>

int main()
{
    int cumsum = 0;
    int i = 0;
    while (i <= 100)
    {
        cumsum = cumsum + i;
        i++;
    }
    printf("the cumlative sum up to 100 is %d\n", cumsum);
}