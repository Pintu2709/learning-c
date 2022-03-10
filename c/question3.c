#include <stdio.h>

int main()
{
    int i, j, N;

    // input number of rows from user
    printf("Enter number of rows:5");
    scanf("%d", &N);
    // Iterate through N rows
    for (i = 1; i <= N; i++)
    {
        // Iterate over columns
        for (j = 1; j <= N; j++)
        {
            /*  print star for each column*/
            printf("1");
        }
        /*move to the next lin /row */
        printf("\n");
    }
    return 0;
}
