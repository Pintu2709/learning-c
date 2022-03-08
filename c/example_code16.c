#include <stdio.h>
int main()
{
    int number = 1;
    printf("multiplication Table for 5\n");
    do
    {
        printf("5x%d\n", number, 5 * number);
        number++;

    } while (number <= 10);
}