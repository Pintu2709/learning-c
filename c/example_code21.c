#include <stdio.h>
void main()
{
    char days = 'f';

    printf("Enter an days (m, t, w, h, f, s): ");
    scanf("%c", &days);
    switch (days)
    {
    case 'm':
        printf("monday");
        break;
    case 't':
        printf("Tuesday");
        break;
    case 'w':
        printf("Wednesday");
        break;
    case 'h':
        printf("Thrusday");
        break;
    case 'f':
        printf("Friday");
        break;

    default:
        break;
    }
}