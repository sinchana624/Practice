#include <stdlib.h>

int* findEvenNumbers(int* digits, int digitsSize, int* returnSize) {
    int *ans = malloc(1000 * sizeof(int));
    int count = 0;

    for (int i = 100; i < 1000; i++) {
        if (i % 2 != 0)
            continue;

        int a = i / 100;
        int b = (i / 10) % 10;
        int c = i % 10;

        int used[10] = {0};

        for (int j = 0; j < digitsSize; j++)
            used[digits[j]]++;

        if (used[a] > 0) {
            used[a]--;

            if (used[b] > 0) {
                used[b]--;

                if (used[c] > 0) {
                    ans[count++] = i;
                }
            }
        }
    }

    *returnSize = count;
    return ans;
}