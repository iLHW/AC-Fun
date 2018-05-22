#include <stdio.h>
#include <string.h>

#define MAX 10000000

// elementary algorithm exercise
int Map(char alpha) {
    if (alpha >= '0' && alpha <= '9') return alpha - '0';
    if (alpha == 'A' || alpha == 'B' || alpha == 'C') return 2;
    if (alpha == 'D' || alpha == 'E' || alpha == 'F') return 3;
    if (alpha == 'G' || alpha == 'H' || alpha == 'I') return 4;
    if (alpha == 'J' || alpha == 'K' || alpha == 'L') return 5;
    if (alpha == 'M' || alpha == 'N' || alpha == 'O') return 6;
    if (alpha == 'P' || alpha == 'R' || alpha == 'S') return 7;
    if (alpha == 'T' || alpha == 'U' || alpha == 'V') return 8;
    if (alpha == 'W' || alpha == 'X' || alpha == 'Y') return 9;
    return -1;
}

int Rec[MAX];
char in[100];

int main() {
    int t, res, tmp, f, l;
    memset(Rec, 0, sizeof(Rec));
    scanf("%d", &t);
    while (t--) {
        scanf("%s", in);
        tmp = 0;
        for (int i = 0; in[i] != 0; i++) {
            res = Map(in[i]);
            if (res != -1)
                tmp = tmp * 10 + res;

        }
        Rec[tmp]++;
    }
    f = 1;
    for (int i = 0; i < MAX; i++)
        if (Rec[i] > 1) {
            f = 0;
            printf("%03d-%04d %d\n", i / 10000, i % 10000, Rec[i]);
        }
    if (f)printf("No duplicates.\n");
    return 0;
}