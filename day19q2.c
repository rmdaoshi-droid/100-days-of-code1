#include <stdio.h>

int main() {
    int n, sum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;
    while (temp != 0) {
        rem = temp % 10;
        sum += rem;
        temp /= 10;
    }

    printf("Sum of digits of %d is: %d\n", n, sum);

    return 0;
} 