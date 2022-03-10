#include <stdio.h>

void main()
{
    int i, j;

    int line;
    // Read user input from terminal/ console
    printf("enter an line number:");

    scanf("%i", &line);
    printf("line: %i", line);
    printf("\n");
    for (int i = 1; i <= line; i++)
        ;
    {

        for (int j = 1; j <= i; j++)
        {
            printf("%i ", i);
            // printf("* ");
        }

        printf("\n");
    }
}
// printf("\n");
// }

// printf("\n");
// }

// *
// * *
// * * *
// * * * *
// * * * * *

//  01
//  02 03
//  04 05 06
//  07 08 09 10
//  11 12 13 14

// 01
// 02 02
// 03 03 03
// 04 04 04 04
// 05 05 05 05 05
