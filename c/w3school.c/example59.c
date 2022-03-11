#include <stdio.h>

int main()
{
    int myAge = 43;    // an int variable
    int *ptr = &myAge; // A pointer variable, with the mane ptr,that stores address of myAge
    // Output the value of myAge
    printf("%d\n", myAge);
    // Output the memory address of myAge(0x7ffe5367e044)
    printf("%p\n", &myAge);
    // Output the memory address of myAge with the pointer (0x7ffe5)
    printf("%p\n", ptr);
}