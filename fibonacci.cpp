#include <stdio.h>

long long int fibo(long long int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    long long int a = 0, b = 1, c;
    for (long long int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    long long int t;
    scanf("%lld", &t);

    for (long long int i = 0; i < t; i++) {
        long long int b;
        scanf("%lld", &b);
        printf("Case #%lld: %lld\n", i + 1, fibo(b - 1));
    }

    return 0;
}
