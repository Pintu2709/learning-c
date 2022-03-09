#include <stdio.h>

void writeMessage(char name[], int n)
{
    printf("Hello, %s %d\n", name, n);
}

int main()
{
    writeMessage((char *)"Dave", 123);
    writeMessage((char *)"Victoria", 444);
    return 0;
}