#include <stdio.h>

int main()
{
    int i, fact = 1, num;
    printf("\nPlease enter a number to find factorial:");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("\nPlese enter a postive number to");
        printf("find factorial and try again.\n");
        printf("\nFactorial can't be found for negative or 0\n");
        printf("values. It can be only positive or 0\n");
        return 1;
    }
    for (i = 1; i <= num; i++)
        fact = fact * i;
    printf("\n");
    printf("Entered number is %d and it's factorial(%d!) is %d\n".num, num, fact);
    return 0;
}
