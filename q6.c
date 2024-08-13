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
        if (n == numRows || n == 1) {
            sign *= -1
        }
        n += sign;
    }

    for (int i = 1; i <= strlen(s); i++) {
    }
}

int main() {
    char s[] = "PAYPALISHIRING";
    char *x = (char *)malloc(sizeof(char) * strlen(s))
}
