#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("a char is %1d bytes\n", sizeof(char));
    printf("a int is %1d bytes \n", sizeof(int));
    printf("an float is %1d bytes\n", sizeof(float));
    printf("a double is %1d bytes\n", sizeof(double));
    printf("a short int is %1d bytes\n", sizeof(short int));
    printf("a long int is %1d bytes\n", sizeof(long int));
    printf("a long double is %1d bytes\n", sizeof(long double));
    return 0;
}