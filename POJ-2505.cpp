#include <stdio.h>

// Simple SG or Like-Bash Game
int main() {
    double i;
    while (~scanf("%lf", &i)) {
        for (; i > 18; i /= 18);
        printf(i <= 9 ? "Stan wins.\n" : "Ollie wins.\n");
    }
}