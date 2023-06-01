#include <stdio.h>

void rmn_numral(int a)
{
    while (a != 0)
    {
        if (a >= 1000)
        {
            printf("m");
            a -= 1000;
        }
        else if (a >= 500)
        {
            printf("d");
            a -= 500;
        }
        else if (a >= 100)
        {
            printf("c");
            a -= 100;
        }
        else if (a >= 50)
        {
            printf("l");
            a -= 50;
        }
        else if (a >= 10)
        {
            printf("x");
            a -= 10;
        }
        else if (a >= 5)
        {
            printf("v");
            a -= 5;
        }
        else if (a >= 1)
        {
            printf("i");
            a-=1;
            
        }
    }
    }

    int main(void)
    {
        int num;

        printf("Enter year:");
        scanf("%d", &num);
        
        printf("Roman Equivalent:");
        
        rmn_numral(num);
    }