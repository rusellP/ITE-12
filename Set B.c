#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{

    printf("\n");

    // This program takes a 7-digit number from the user and returns the same number in written English format.

    int N;
    int last, middle;

    printf("Input a 7-digit number: ");
    scanf("%d", &N);

    last = N % 1000;                        // Save the last 3 digits to a variable
    N /= 1000;                              // Remove the last 3 digits

    middle = N % 1000;
    N /= 1000;

    printf("\nYour number in written English would be displayed as %d,%d,%d.", N, middle, last);

    printf("\n\n");
    return 0;


}
