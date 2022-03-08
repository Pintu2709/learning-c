#include <stdio.h>
int main(int argc, char *argv[])
{
    int n, x;
    n = 3;
    x = 0;
    printf("n=%d,x=%d\n", n, x);
    x = n++;
    printf("n=%d,\n\n", n, x);
    n = 3;
    x = 0;
    printf("n=%d,x=%d\n", n, x);
    x = ++n;
    printf("n=%d,x=%d\n", n, x);
    return 0;
}