#include <stdio.h>

int main()
{
    int myInt;
    float myFloat;
    double myDouble;
    char mychar;
    printf("%li\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(mychar));
    return 0;
}