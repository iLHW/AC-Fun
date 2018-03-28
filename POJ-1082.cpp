#include <stdio.h>

//Just guess
int main() {
    int n, a, b, c;
    scanf("%d", &n);
    while (n--) {
        scanf("%d%d%d", &a, &b, &c);
        printf((b == 9 && c == 30) || (b == 11 && c == 30) || !((b + c) & 1) ? "YES\n" : "NO\n");
    }
}