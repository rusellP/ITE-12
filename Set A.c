#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
    // This program takes a 7-digit number from the user and it returns the sum of all the digits.

    printf("\n");

    int N;                                  // Declaring the variable that holds the 7-digit number
    int sum = 0;                            // Declaring the variable that holds the sum

    printf("Input a 7-digit number: ");     // Prompting the user for input
    scanf("%d", &N);                        // Taking the input from the user

    sum += (N % 10);                        // Adding the last digit to the <sum> variable
    N /= 10;                                // Truncate and remove the last digit

    sum += (N % 10);
    N /= 10;

    sum += (N % 10);
    N /= 10;

    sum += (N % 10);
    N /= 10;

    sum += (N % 10);
    N /= 10;

    sum += (N % 10);
    N /= 10;

    sum += N;

    printf("\nThe sum of the digits in your number comes out to be %d.", sum);

    printf("\n\n");
    return 0;


}
