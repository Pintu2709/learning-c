#include <stdio.h>
int main()
{
    char greetings[] = {'h', 'e', 'l', 'l', 'o', ' ', 'P', 'I', 'N', 'T', 'U', '\0'};
    char greetings2[] = "hello PINTU";
    printf("%s\n", greetings);
    printf("%s\n", greetings2);
    return 0;
}