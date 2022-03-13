#include <stdio.h>
void myFunction(char name[], int age)
{
    printf("Hello %s. you are %d years old\n", name, age);
}
int main()
{
    myFunction("Bajrangi", 10);
    myFunction("Shivani verma", 12);
    myFunction("sawati verma", 13);
    return 0;
}