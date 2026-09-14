#include <stdio.h>

int main() {
    long long binary, temp;
    long long comp = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    temp = binary;
    while (temp != 0) {
        int bit = temp % 10;
        int flipped = (bit == 0) ? 1 : 0;
        comp = comp + (flipped * place);
        place *= 10;
        temp /= 10;
    }

    printf("1's complement: %lld\n", comp);

    return 0;
}