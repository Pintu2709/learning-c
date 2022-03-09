#include <stdio.h>

void writeMessage(char name[])
{
    printf("hello,%\n", name);
}

int main()
{
    writeMeassage((char *)"Dave");
    writeMessage((char *)"Victoria");
    return 0;
}