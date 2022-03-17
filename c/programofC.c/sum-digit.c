
#include <stdio.h>

int main()
{

    int num;

    printf("\nPlease enter  numbers:");

    scanf("%i", &num);

    printf("USer Input is : %i", num);

    int sum = 0;
    // for (int i = 0; i <= 5; i++)
    // {
    //     int d = num % 10;
    //     printf("\ni =: %i", i);
    //     printf("d: %i", d);
    //     num = num / 10;

    //     sum = sum + d;
    //     printf("\nNew number after d: %i %i", i, num);
    // }

    // while (num > 0)
    // {
    //     int d = num % 10;
    //     // printf("\ni =: %i", i);
    //     printf("d: %i", d);
    //     num = num / 10;

    //     sum = sum + d;
    //     printf("\nNew number after d: %i ", num);
    // }

    printf("\nSum of digit : %i", sum);

    // int d2 = num % 10;
    // printf("\nd2: %i", d2);
    // num = num / 10;

    // printf("\nNew number after d2: %i", num);

    // int d3 = num % 10;
    // printf("\nd3: %i", d3);

    return 0;
}
