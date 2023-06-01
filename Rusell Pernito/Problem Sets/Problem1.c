// Practice Problem No. 1

#include <stdio.h>

void roman (int year);

int main ()

{
    int year;
    printf ("Pleas input a year: ");
    scanf ("%d", &year);

    roman (year);               // The inputted year by the user will be converted into a recursive function that will be converted into an int year and will go through a series of if else conditions.

}

roman (int year)

{
    if (year >= 1 && year <= 4) // Numbers between 1 to 4 will print the letter I.
    {
        printf ("I");
        roman (year - 1);       // After printing a certain letter, the roman function is called and the year will be reduced accordingly and will convert the remaining years inputted by the user.
    }

    else if (year >= 5 && year <= 9) // Numbers between 5 to 9 will print the letter V.
    {
        printf ("V");
        roman (year - 5);
    }

    else if (year >= 10 && year <= 49) // Numbers between 10 to 49 will print the letter X.
    {
        printf ("X");
        roman (year - 10);
    }

    else if (year >= 50 && year <= 99) // Numbers between 50 to 99 will print the letter L.
    {
        printf ("L");
        roman (year - 50);
    }

    else if (year >= 100 && year <= 499) // Numbers between 100 to 499 will print the letter C.
    {
        printf ("C");
        roman (year - 100);
    }

    else if (year >= 500 && year <= 999) // Numbers between 500 to 999 will print the letter D.
    {
        printf ("D");
        roman (year - 500);
    }

    else if (year >= 1000)               // Numbers between 1000 and beyond will print the letter M.
    {
        printf ("M");
        roman (year - 1000);
    }
}
