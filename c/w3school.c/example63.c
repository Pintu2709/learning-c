#include <stdio.h>
// create a function
void myFunction()
{
    printf("I just got executed!\n");
}
int main()
{
    myFunction(); // call the function
    myFunction(); // call the function
    myFunction();
    myFunction();
    myFunction(); // call the function
    return 0;
}