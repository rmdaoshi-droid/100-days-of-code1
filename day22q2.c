#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0;
        } else {
            float num = (2 * i) - 1;
            float den = 2 * i;
            sum += (num / den);
        }
    }

    printf("Sum of the series: %.2f\n", sum);

    return 0;
}