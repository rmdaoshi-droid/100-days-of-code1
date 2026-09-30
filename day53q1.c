#include <stdio.h>

int main() {
    int n, nums[100];
    int total = 0, leftSum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        total += nums[i];
    }

    for (int i = 0; i < n; i++) {
        int rightSum = total - leftSum - nums[i];

        if (leftSum == rightSum) {
            printf("%d", i);
            return 0;
        }

        leftSum += nums[i];
    }

    printf("-1");

    return 0;
}