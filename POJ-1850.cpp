#include <stdio.h>
#include <string.h>

int c[27][27] = {0};
char str[11];

int main() {
    for (int i = 0; i <= 26; i++)
        for (int j = 0; j <= i; j++)
            if (!j || i == j)
                c[i][j] = 1;
            else
                c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
    while (~scanf("%s", str)) {
        int len = strlen(str), sum = 0;
        for (int i = 1; i < len; i++)
            if (str[i - 1] >= str[i]) {
                printf("0");
                return 0;
            }
        for (int i = 1; i < len; i++)
            sum += c[26][i];
        for (int i = 0; i < len; i++) {
            char ch = (!i) ? 'a' : str[i - 1] + 1;
            for (; ch <= str[i] - 1; ch++)
                sum += c['z' - ch][len - 1 - i];
        }
        printf("%d\n", ++sum);
    }
    return 0;
}