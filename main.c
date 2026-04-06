#include <stdio.h>

int main() {
    long long a[9];
    long long x, result = 0, x_power = 1;

    for (int i = 0; i < 9; i++) {
        if (scanf("%lld", &a[i]) != 1) return 0;
    }
    if (scanf("%lld", &x) != 1) return 0;

    for (int i = 0; i < 9; i++) {
        result += a[i] * x_power;
        x_power *= x;
    }

    printf("HTB{%lld}\n", result);
    return 0;
