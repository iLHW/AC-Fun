#include <stdio.h>

// Simple Nimm's Game
int main() {
    int m, p, r;
    while (~scanf("%d", &m)) {
        r = 0;
        for (int i = 0; i < m; i++) {
            scanf("%d", &p);
            r = r ? r ^ p : p;
        }
        printf(r ? "Yes\n" : "No\n");
    }
}