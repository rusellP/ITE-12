#include <stdio.h>

int main() {
    int count;
    float x, res = 0.0;

    printf("Enter the value of x:\n");
    scanf("%f", &x);

    for (count = 1; count <= 7; count++) {
        float term = 1.0;
        for (int i = 0; i < count; i++) {
            term *= (x - 1) / x;
        }
        res += term * 0.5;
    }

    printf("The result of the first seven terms = %.2f", res);

    return 0;
}
