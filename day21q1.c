#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;
    temp = n;

    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    first = temp;

    int power = round(pow(10, digits));
    int swapped = last * power + (n % power) - last + first;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}