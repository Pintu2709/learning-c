#include <stdio.h>
int main()
{
    /*create an interger varible that will store the number
    we get from the user*/
    int myNum;
    // Ask the user to type a number
    printf("Type a number and press enter:\n");
    // Get and sve the number the user types
    scanf("%d", &myNum);
    // print the number the user tpyed
    printf("Your number is:%d", myNum);
    return 0;
}