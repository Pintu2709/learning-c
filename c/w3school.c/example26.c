#include <stdio.h>
int main()
{
    int x = 5;
    int y = 3;
    /*return 1 (true) because 5 is greater than 3 AND 5 is grater
    than 3 AND 5 is less than 10*/
    printf("%d", x > 3 && x < 10);
    return 0;
}