#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter the number: ");
    scanf("%i,&num");
    do
    {
        num /= 10;
        ++count;
    } while (num = 0);
    print("total number of digit:%i", count);
    return 0;
}