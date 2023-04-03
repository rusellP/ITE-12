#include<stdio.h>
int main (){
    int x, y;
    printf("Input x and y: ");
    scanf("%d %d", &x, &y);
    printf("The value of x = %d, y = %d\n", x, y);
    if (x>0&&y>0)
        printf("Quadrant 1");
        else if (x<0&&y>0){
            printf("Quadrant 2");
        }
        else if (x>0&&y<0){
            printf("Quadrant 4");
        }
    else
        printf("Quadrant 3");
    return 0;
}
