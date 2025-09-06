#include <stdio.h>

long long int countAsterisks(int x) {
    if (x <= 0) {
        return 0;
    } else {
        return x + countAsterisks(x - 2);
    }
}

void fraktal_B(int x) {
    int i, j;

    for (i = x; i >= 1; i -= 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int X;
    scanf("%d", &X);

    long long int result = countAsterisks(X);
    printf("%lld\n", result);

    fraktal_B(X);

    return 0;
}

