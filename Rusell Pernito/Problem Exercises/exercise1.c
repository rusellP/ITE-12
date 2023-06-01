// Rusell G. Pernito
// ITE 12 - DN1

#include <stdio.h>
void choice1();
int main ()

{
    void choice1 ();
    char input;
    int input_ac, dig_num1, dig_num2, dig_num3, dig_num4, dig_num5, dig_num6;
    int bal_1, bal_2, bal_3, bal_4, bal_5, bal_6,
    bal_num, with_num, with_amo;

    printf ("Welcome to the bank, How are you? Please take a look of our services: ");
    printf ("\nInput any of your choosing, enjoy!");

    printf ("\nPress A/a: Enroll Account and Input Initial Balance", 'A', 'a');
    printf ("\nPress B/b: Balance Inquiry", 'B', 'b');
    printf ("\nPress C/c: Withdraw Cash", 'c', 'C');
    printf ("\nPress E/e: Exit", 'e', 'E');

    printf ("\nInput: ");
    scanf ("%c", &input);

    if (input == 'A' || input == 'a')
    {
        printf ("How many accounts would you like to enroll?: ");
        scanf ("%d", &input_ac);

        if (input_ac > 3)
        {
            printf ("Sorry, this system can only cater 3.");
        }

        else if (input_ac == 3)
        {
            printf ("Input account number (5 digit numbers): ");
            scanf ("%d", &dig_num1);
            printf ("Initial Balance: ");
            scanf ("%d", &bal_1);

            printf ("Successfully saved!\n\n");

            printf ("Input account number (5 digit numbers): ");
            scanf ("%d", &dig_num2);
            printf ("Initial Balance: ");
            scanf ("%d", &bal_2);

            printf ("Successfully saved!\n\n");

            printf ("Input account number (5 digit numbers): ");
            scanf ("%d", &dig_num3);
            printf ("Initial Balance: ");
            scanf ("%d", &bal_3);

            printf ("Successfully saved!\n\n");
        }

        else if (input_ac == 2)
        {
            printf ("Input account number (5 digit numbers): ");
            scanf ("%d", &dig_num4);
            printf ("Initial Balance: ");
            scanf ("%d", &bal_4);

            printf ("Successfully saved!\n\n");

            printf ("Input account number (5 digit numbers): ");
            scanf ("%d", &dig_num5);
            printf ("Initial Balance: ");
            scanf ("%d", &bal_5);

            printf ("Successfully saved!\n\n");
        }

        else if (input_ac == 1)
        {
            printf ("Input account number (5 digit numbers): ");
            scanf ("%d", &dig_num6);
            printf ("Initial Balance: ");
            scanf ("%d", &bal_6);

            printf ("Successfully saved!\n\n");
        }
    }

    if (input == 'B' || input == 'b')   // This code should be connected to the first part, but I forgot po.
    {
        printf ("Account number: ");
        scanf ("%d", &bal_num);

        if (bal_num != dig_num1 || bal_num != dig_num2 || bal_num != dig_num3 || bal_num != dig_num4 || bal_num != dig_num5 || bal_num != dig_num6)
        {
            printf ("Error, no such account number exist in the system!\nEnter again!");

            printf ("Account number: ");
            scanf ("%d", &bal_num);
        }

        else if (bal_num == dig_num1)
        {
            printf ("Your account is charged 16.00");
            bal_1 = bal_1 - 16;
            printf ("Account balance is %d", bal_1);
        }

        else if (bal_num == dig_num2)
        {
            printf ("Your account is charged 16.00");
            bal_2 = bal_2 - 16;
            printf ("Account balance is %d", bal_2);
        }

        else if (bal_num == dig_num3)
        {
            printf ("Your account is charged 16.00");
            bal_3 = bal_3 - 16;
            printf ("Account balance is %d", bal_3);
        }

        else if (bal_num == dig_num4)
        {
            printf ("Your account is charged 16.00");
            bal_4 = bal_4 - 16;
            printf ("Account balance is %d", bal_4);
        }

        else if (bal_num == dig_num5)
        {
            printf ("Your account is charged 16.00");
            bal_5 = bal_5 - 16;
            printf ("Account balance is %d", bal_5);
        }

        else if (bal_num == dig_num6)
        {
            printf ("Your account is charged 16.00");
            bal_6 = bal_6 - 16;
            printf ("Account balance is %d", bal_6);
        }
    }

    if (input == 'C' || input == 'c')
    {
        printf ("Account #: ");
        scanf ("%d", &with_num);
        printf ("Withdraw ammount: ");
        scanf ("%d", &with_amo);

        if (with_amo >= bal_1)
        {
            printf ("Withdrawn amount: ");
            scanf ("%d", &with_num);
        }
    }
}
