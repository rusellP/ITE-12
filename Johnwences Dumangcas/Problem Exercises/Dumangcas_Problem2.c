#include <stdio.h>

void square();
void triangle();
void rectangle(  );
void diamond ();
int main(void)
{
    char choice;
    int sdl,base,height;

    printf("Press a for square\nPress b for triangle\nPress c for rectangle\nPress d for diamond\n");
    printf("Input:");
    scanf("%c", &choice);

    switch (choice)
    {
    case 'a'://for square
        printf("Enter side length:");
        scanf("%d", &sdl);
        square(sdl);
        break;
    case 'b'://for triangle 
        printf("Enter side length:");
        scanf("%d", &sdl);
        triangle(sdl);
        break;
    case 'c'://for rectangle 
        printf("Enter base:");
        scanf("%d", &base);
        printf("Enter height:");
        scanf("%d", &height);
        rectangle(base,height);
        break;
    case 'd'://for diamond
        printf("Enter side length:");
        scanf("%d", &sdl);
diamond(sdl);
        break;
    }
}
void square(int a)
{
    int x, y;

    printf("Output:\n\n");
    for (x = 0; x < a; ++x)
    {
        for (y = 0; y < a; ++y)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void triangle(int a)
{
    int x, z, y;

    printf("Output:\n\n");
    for (x = 1; x <= a; ++x)
    {
        for (z = x; z <= a; z++)
            printf(" ");
        for (y = 1; y <= x; ++y)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void rectangle(int a,int b ){
   int i,j;
   
   printf("Output:\n\n");
   for(i = 0; i < b; i++){
        for(j = 0; j < a; j++){
           printf("* ");
        }
        printf("\n");
   }
}
void diamond(int a){
    
    int c,k;
    printf("Output:\n\n");
    for (k = 1; k <= a; k++)
  {
    for (c = 1; c <= a-k; c++)
      printf("  ");

    for (c = 1; c <= 2*k-1; c++)
      printf("* ");

    printf("\n");
  }

  for (k = 1; k <= a - 1; k++)
  {
    for (c = 1; c <= k; c++)
      printf("  ");

    for (c = 1 ; c <= 2*(a-k)-1; c++)
      printf("* ");

    printf("\n");
  }
}