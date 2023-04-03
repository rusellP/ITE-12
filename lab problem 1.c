#include <stdio.h>
#include <stdlib.h>

int main ()

{
    int weight ;
    printf ("Enter the weight = ");
    scanf ("%d", &weight);

    if (weight < 115) {
    printf ("Flyweight"); }

    else if (weight > 116 && weight < 122) {
    printf ("Bantamweight"); }

    else if (weight > 123 && weight < 154) {
    printf("Featherweight"); }

    else if (weight > 154 && weight < 190) {
    printf ("Middleweight"); }

    else {
    printf ("Heavyweight"); }

    return 0;
}
