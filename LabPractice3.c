#include <stdio.h>

double manualPower(double base, int exponent) {
    double result = 1.0;

    if (exponent >= 0) {
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
    } else {
        for (int i = 0; i > exponent; i--) {
            result /= base;
        }
    }

    return result;
}

int main() {
    int count;
    float x, res = 0.0;

    printf("Enter the value of x:\n");
    scanf("%f", &x);

    for (count = 1; count <= 7; count++) {
        if (count == 1) {
            res = (x - 1) / x;
        } else {
            res = res + manualPower((x - 1) / x, count) * 0.5;
        }
    }

    printf("The result of the first seven terms = %.2f", res);

    return 0;
}
