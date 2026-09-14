#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        float num = 2 * i;
        float den = (4 * i) - 1;
        sum += (num / den);
    }

    printf("Sum of the series: %.2f\n", sum);

    return 0;
}