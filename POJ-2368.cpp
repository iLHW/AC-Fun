#include<string.h>
#include <stdio.h>

// Bash Game variant
#define MAXN 1001
int f[MAXN];

int main() {
    int k, l;
    while (scanf("%d", &k) != EOF) {
        l = 0;
        memset(f, 0, sizeof(f));
        for (int i = 1; i * i < k; i++)
            if (k % i == 0) {
                f[l++] = i;
                f[l++] = k / i;
            }
        for (int i = 1; i < l; i++)
            for (int j = 1; j < l - i; j++)
                if (f[j] > f[j + 1]) {
                    f[j] = f[j + 1] - f[j];
                    f[j + 1] = f[j + 1] - f[j];
                    f[j] = f[j + 1] + f[j];
                }
        printf("%d\n", (((f[1] - 2) > 0) ? f[1] : f[2]) - 1);
    }
}