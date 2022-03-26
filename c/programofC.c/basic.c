#include <stdio.h>

int addTwoNumber(int num1, int num2)
{

    // printf("Sum of two number = %i", num1 + num2);

    return num1 + num2;
}

int multiplyTwoNumber(int num1, int num2)
{

    return num1 * num2;
}

int main()
{

    int num1 = 0, num2 = 0;
    num1 = (int)"Ravi";
    printf("Enter first numer \n");
    scanf("%i", &num1);
    printf("Enter second numer \n");
    scanf("%i", &num2);
    int sum = addTwoNumber(num1, num2);

    printf("Sum = %i \n", sum);

    int multi = multiplyTwoNumber(num1, num2);

    printf("\nmulti = %i", multi);

    return 0;
}

// #include <stdio.h>

// int addTwoNumber()
// {
//     int num1 = 0, num2 = 0;
//     printf("Enter first numer \n");
//     scanf("%i", &num1);
//     printf("Enter second numer \n");
//     scanf("%i", &num2);

//     // printf("Sum of two number = %i", num1 + num2);

//     return num1 + num2;
// }

// int multiplyTwoNumber()
// {
//     int num1 = 0, num2 = 0;
//     printf("Enter  first multi numer \n");
//     scanf("%i", &num1);
//     printf("Enter second multi numer \n");
//     scanf("%i", &num2);

//     // printf("Sum of two number = %i", num1 + num2);

//     return num1 * num2;
// }

// int main()
// {

//     int sum = addTwoNumber();

//     printf("Sum = %i \n", sum);

//     int multi = multiplyTwoNumber();

//     printf("\nmulti = %i", multi);

//     return 0;
// }
