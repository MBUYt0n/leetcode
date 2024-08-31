#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int reverse(int x) {
    int a = 0;
    int sign = 1;
    if (x < 0) {
        x *= -1;
        sign = -1;
    }

    printf("x = %d\n", x);

    while (x > 0) {
        if (a > INT_MAX || a < INT_MIN) {
            printf("me");
            return 0;
        }
        a = (a * 10) + (x % 10);
        x /= 10;
    }
    if (a > INT_MAX || a < INT_MIN) {
        printf("hi");
        return 0;
    }
    return a * sign;
}

int main() {
    int a = -2147483648;
    int x = reverse(a);
    printf("%d", x);
}