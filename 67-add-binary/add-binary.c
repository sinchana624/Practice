#include <string.h>
#include <stdlib.h>

char* addBinary(char* a, char* b) {
    int len1 = strlen(a);
    int len2 = strlen(b);

    int i = len1 - 1;
    int j = len2 - 1;
    int carry = 0;

    char *res = (char*)malloc((len1 > len2 ? len1 : len2) + 2);
    int k = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0)
            sum += a[i--] - '0';

        if (j >= 0)
            sum += b[j--] - '0';

        res[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }

    res[k] = '\0';

    for (int l = 0, r = k - 1; l < r; l++, r--) {
        char temp = res[l];
        res[l] = res[r];
        res[r] = temp;
    }

    return res;
}