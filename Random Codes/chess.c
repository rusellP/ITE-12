#include <stdio.h>

int main(void)
{
    char x;
    int y;

    printf("Enter column:");
    scanf("%c", &x);//gets user input
    printf("Enter row:");
    scanf("%d", &y);//gets user input
    printf("Position given is %c%d\n",x,y );
   


    if (x % 2 == 0&& x >= 'a' && x<= 'h' || x >= 'A' && x <= 'H'
    )//reads char as an int and converts it's corresponding ASCII value
    {
        if (y % 2 == 0&&y<=8)
        {
            printf("%c%d is in black square ",x,y);
        }
        else if (y % 2 == 1&&y<=8)
            printf("%c%d is in white square",x,y);
            else
            printf("Invalid row");
    }
    else    if (x % 2 == 1&& x >= 'a' && x<= 'h' || x >= 'A' && x <= 'H')
    {
      
         if (y % 2 == 0&&y<=8)
        {
            printf("%c%d is in white square",x,y);
        }
        else if (y % 2 == 1&&y<=8)
            printf("%c%d is in black square ",x,y);
            else
            printf("Invalid row");
    }
    else
    printf("Invalid column");
}