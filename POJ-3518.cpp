#include<stdio.h>
#include<string.h>

//Simple Prime
#define MAXN 1302000
int pri[MAXN];

int main() {
    memset(pri, 0, sizeof(pri));

    for (int i = 2; i <= 1141; i++) {
        if (!pri[i])
            for (int j = i * i; j <= MAXN; j = j + i)
                pri[j] = 1;
    }
    int n;

    while (~scanf("%d", &n) && n) {
        int st = n, en = n;
        for (; pri[st] == 1; st--);
        for (; pri[en] == 1; en++);
        printf("%d\n", en - st);
    }

    return 0;
}