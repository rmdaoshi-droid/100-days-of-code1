#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    int freq[10000] = {0};

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);

        if (freq[nums[i]] == 1) {
            printf("%d", nums[i]);
            return 0;
        }

        freq[nums[i]]++;
    }

    return 0;
}