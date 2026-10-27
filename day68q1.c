#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        sum += nums[i];
    }

    long long total = (long long)n * (n + 1) / 2;

    printf("%lld", total - sum);

    return 0;
}