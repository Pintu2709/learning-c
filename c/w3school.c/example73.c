#include <stdio.h>
// Finction declartion
int myFunction(int, int);
// The main method
int main()
{
    int result = myFunction(5, 3); // call the function
    printf("Result is=%d", result);
    return 0;
    // call
}
// Function definition
int myFunction(int x, int y)
{

    return x + y;
}
