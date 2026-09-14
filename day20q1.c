#include <stdio.h>

int main() {
    int n, rem, hasOdd = 0;
    long long prod = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;
    while (temp != 0) {
        rem = temp % 10;
        if (rem % 2 != 0) {
            prod *= rem;
            hasOdd = 1;
        }
        temp /= 10;
    }

    if (!hasOdd) {
        prod = 0;
    }

    printf("Product of odd digits: %lld\n", prod);

    return 0;
}