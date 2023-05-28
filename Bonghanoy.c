#include<stdio.h>
void disSquare(int length);
void disTriangle(int length);
void disRectangle(int base, int height);
void disDiamond(int length);
int main()
{
    char choice;
    int length,base,height;

    printf("\nMenu");
    printf("\nPress a for square", 'a');
    printf("\nPress b for triangle", 'b');
    printf("\nPress c for rectangle", 'c');
    printf("\nPress d for diamond", 'd');

    printf("\nInput:");
    scanf("%c",&choice);

    if (choice == 'a')
        {
        printf("Input side length:");
        scanf("&d",&length);
        disSquare(length);
    }
    else if (choice == 'b')
    {
        printf("Input Side Length:");
        scanf("&d",&length);
        disTriangle(length);
    }
    else if (choice == 'c')
    {
        printf("Input Base and Height:");
        scanf("&d %d",&base, &height);
        disRectangle(base,height);
    }
    else if (choice == 'd')
    {
        printf("Input side length:");
        scanf("&d",&length);
        disDiamond(length);
    }
    return 0;
}
void disSquare(length)
{
    for(int i=0; i<=length; i++)
        {
        for(int j=0; j<=length; j++)
        {
            printf("* ");
        }
    printf("\n");
    }
}
void disTriangle(length)
{
    int i, j, space;
    for(i=1; i<=length; i++)
        {
        for(space=1; space<=length-i; space++)
            {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++)
            {
            printf("* ");
        }
        printf("\n");
    }
}
void disRectangle(base,height)
{
    int i,j;
    for(i=1; i<=base; i++)
        {
        for(j=1; j<=height; j++)
            {
            printf("* ");
        }
        printf("\n");
    }
}
void disDiamond(length)
{
    int c,k;
    for (k = 1; k <= length; k++)
  {
        for (c = 1; c <= length-k; c++)
            printf(" ");

            for (c = 1; c <= 2*k-1; c++)
                printf("*");

    printf("\n");
  }

  for (k = 1; k <= length - 1; k++)
  {
    for (c = 1; c <= k; c++)
      printf(" ");

    for (c = 1 ; c <= 2*(length-k)-1; c++)
      printf("*");

    printf("\n");
  }
}
