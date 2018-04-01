#include <stdio.h>

//A Cute Game of Variant NIMM'S Game
int main() {
    int T, N, p, g, SJ;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        g = SJ = 0;
        for (int i = 0; i < N; i++) {
            scanf("%d", &p);
            g = g ? g ^ p : p;
            SJ = p > 1 ? 1 : SJ;
        }
        if (!SJ)
            g = !g;
        printf(g ? "John\n" : "Brother\n");
    }
}