/* Write a program to obtain the reversed
number and to determine whether the original and reversed numbers are equal or not. */

 writing program in reversed using while loop
#include <stdio.h>
#include <stdlib.h>

int main ()

{
    int num, rnum = 0, remainder;

    printf ("Enter 5 digit numbers to be reverse: ");
    scanf ("d%", &num);

    while (num != 0) {
    remainder = num % 10;
    rnum = rnum * 10 + remainder;
    num = num / 10;
    }

    printf ("The reversed number is: %d", rnum);

    return 0;
}
