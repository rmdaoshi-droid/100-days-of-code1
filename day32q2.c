#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0};

    printf("Enter an integer: ");
    scanf("%lld", &n);

    if (n < 0) {
        n = -n;
    }

    if (n == 0) {
        freq[0] = 1;
    } else {
        while (n > 0) {
            int digit = n % 10;
            freq[digit]++;
            n /= 10;
        }
    }

    int max_count = 0;
    int most_frequent_digit = 0;

    for (int i = 0; i < 10; i++) {
        if (freq[i] > max_count) {
            max_count = freq[i];
            most_frequent_digit = i;
        }
    }

    printf("Most frequent digit: %d (occurs %d times)\n", most_frequent_digit, max_count);

    return 0;
}