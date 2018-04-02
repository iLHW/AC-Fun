#include <stdio.h>
#include <math.h>

//Easy Prime
int main() {
    int n, t, p, d;
    while (~scanf("%d", &n) && n) {
        d = n < 0 ? 2 : 1;
        n = n < 0 ? -n : n;
        for (int i = 31; i >= 1; i -= d) {
            t = (int) (pow(1.0 * n, 1.0 / i) + 0.5);
            p = (int) (pow(1.0 * t, 1.0 * i) + 0.5);
            if (n == p) {
                printf("%d\n", i);
                break;
            }

        }
    }
    return 0;
}