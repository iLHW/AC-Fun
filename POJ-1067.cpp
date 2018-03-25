#include <stdio.h>
#include <math.h>

// Simple Wythoff's game
int main() {
    int a, b;
    while (~scanf("%d%d", &a, &b)) {
        printf((floor((a > b ? a - b : b - a) * ((sqrt(5) + 1)) / 2) == (a > b ? b : a)) ? "0\n" : "1\n");
    }
}