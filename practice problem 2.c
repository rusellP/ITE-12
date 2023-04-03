#include <stdio.h>
#include <stdlib.h>

int main ()

{
    int weapon ;
    printf ("type 1 if you want a sword then type 2 if you want a bow then type 3 if you want wand");
    scanf ("%d", &weapon);

    if (weapon == 1) {
        int career ;
        printf ("type 1 if you want to be a melee or type 2 if you want to be a kingsguard");
        scanf ("%d", &career);
        if (career == 1) {
            printf ("swordsman");
        }
        else {
            printf ("warrior");
        }
    }
    else if (weapon == 2) {
                int career ;
        printf ("type 1 if you want to be a hunter or type 2 if you want to be a sniper");
        scanf ("%d", &career);
        if (career == 1) {
            printf ("hunter");
        }
        else {
            printf ("sniper");
        }
    }
    else {
                int career ;
        printf ("type 1 if you want to be a wizard or type 2 if you want to be a witch");
        scanf ("%d", &career);
        if (career == 1) {
            printf ("wizard");
        }
        else {
            printf ("witch");
        }
    }
}
