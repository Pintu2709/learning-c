
#include <stdio.h>

int main()
{

    float a, b, c;

    printf("\nPlease enter 3 numbers:");

    scanf("%f %f %f", &a, &b, &c);

    if (a >= b && a >= c)

        printf("\nThe largest number is %f", a);

    if (b >= a && b >= c)

        printf("\nThe largest number is %f", b);

    if (c >= a && c >= b)

        printf("\nThe largest number is %f", c);

    return 0;
}
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
// #include <stdio.h>

//     int
//     main()
// {

//     float a, b, c;

//     printf("\nPlease enter 3 numbers:");

//     scanf("%f %f %f", &a, &b, &c);

//     if (a >= b && a >= c)

//         printf("\nThe largest number is %f", a);

//     if (b >= a && b >= c)

//         printf("\nThe largest number is %f", b);

//     if (c >= a && c >= b)

//         printf("\nThe largest number is %f", c);

//     return 0;
// }
