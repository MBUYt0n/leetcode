#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *convert(char *s, int numRows) {
    int idx = 0;
    int t[strlen(s)];
    char *x = (char *)malloc(sizeof(char) * strlen(s));
    int sign = 1;
    int n = 1;
    for (int i = 0; i < strlen(s); i++) {
        t[i] = n;
        n += sign;
        if (n == numRows || n == 1) {
            sign *= -1;
        }
    }

    for (int i = 1; i <= numRows; i++) {
        for (int j = 0; j < strlen(s); j++) {
            if (t[j] == i) {
                x[idx] = s[j];
                idx++;
            }
        }
    }

    return x;
}

int main() {
    char s[] = "AB";
    char *x = (char *)malloc(sizeof(char) * strlen(s));
    x = convert(s, 1);
    printf("%s\n", x);
}
