#include <stdio.h>

// Easy Game
int main() {
    int n;
    while (~scanf("%d", &n)) {
        if (n == 0) break;
        printf(n <= 2 ? "Alice\n" : "Bob\n");
    }
    return 0;
}  