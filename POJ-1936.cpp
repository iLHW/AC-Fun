#include <stdio.h>
#include <string.h>
//Data Structure Simple String
#define MAXN 100000
char s[MAXN], t[MAXN];

int main() {
    while (~scanf("%s%s", s, t)) {
        int sl = strlen(s), tl = strlen(t), sc = 0, tc = 0;
        while (tc < tl)
            if (t[tc++] == s[sc])
                sc++;
        printf(sc == sl ? "Yes\n" : "No\n");
    }
}