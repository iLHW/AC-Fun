#include <stdio.h>

int a[32768];

// A duplication of Simple Prime
int main() {
    int x, n, c;
    a[0] = a[1] = 1;
    for (int i = 2; i < 32768; i++)
        if (!a[i])
            for (int j = i * 2; j < 32768; j += i)
                a[j] = 1;
    while (~scanf("%d", &x) && x) {
        c = 0;
        for (int i = 0; i <= x / 2; i++)
            if (!a[i] && !a[x - i])
                c++;
        printf("%d\n", c);
    }
}