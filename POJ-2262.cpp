#include<math.h>
#include<stdio.h>
//Violent Simple Prime
#define N 1000001
int a[N];

int main() {
    int n;
    a[0] = a[1] = 1;
    for (int i = 2; i < N; i++)
        if (!a[i])
            for (int j = i * 2; j < N; j += i)
                a[j] = 1;
    while (~scanf("%d", &n) && n)
        for (int i = 0; i <= n; i++)
            if (!a[i] && !a[n - i]) {
                printf("%d = %d + %d\n", n, i, n - i);
                break;
            }
    return 0;
}