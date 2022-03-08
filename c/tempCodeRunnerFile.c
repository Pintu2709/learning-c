#include <stdio.h>
#include <stdlib.h>

int main()
{
    char intstrint[] = "1234";
    char floatstring[] = "328.4";
    int myInt = atoi(intstrint);
    double myDouble = atof(floatstring);
    printf("intString=%s\n", intstrint, floatstring);
    printf("myInt=%d,mydouble=%.1f\n\n", myInt, myDouble);

    int a = 2;
    double b = 3.14;
    char mystring1[64], mystring2[64];
    sprintf(mystring1, "%d", a);
    printf("a=%d,b=%.2f\n", a, b);
    printf("mystring1=%s,mystring2=%s", mystring1, mystring2);
    return 0;
}