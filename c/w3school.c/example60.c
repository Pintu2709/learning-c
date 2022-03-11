#include <stdio.h>

int main()
{
    int myAge = 43;    // Variable declaration
    int *ptr = &myAge; // Pointer declaration
    // reference: output the memory Address of myAge with the pointer (0x7ffe5367e044)
    printf("%p\n", ptr);
    // Dereference:output the value of myAge with the pointer  (43)
    printf("%d\n", *ptr);
    return 0;
}