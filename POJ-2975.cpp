#include<stdio.h>

#define MAX 1001
int N, a[MAX], sum, ans;

int main() {
    while (~scanf("%d", &N) && N) {
        ans = sum = 0;
        for (int i = 1; i <= N; i++) {
            scanf("%d", &a[i]);
            sum ^= a[i];
        }
        for (int i = 1; i <= N; i++)
            if ((sum ^ a[i]) < a[i])
                ans++;
        printf("%d\n", ans);
    }
    return 0;
}