#include <stdio.h>

int main()
{
    // check whether 80 is in tbe first 20 multiole of 5
    int mult = 0;
    for (int i = 0; i <= 20; i++)
    {
        mult = 5 * i;
        if (mult == 80)
        {
            printf("80 is in the first 20 multiples of 5!\n5  %d\n", i, mult);
            break;
            printf("The loop does not reach this piont\n");
        }
    }
}
printf("loop has ended");