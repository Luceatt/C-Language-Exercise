#include<stdio.h>

long long int game(long long int n) {
    if (n % 2 == 0)
        return n / 2;
    else
        return ((n * 3) + 1);
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        long long int n;
        scanf("%lld", &n);
        long long int count = 0;

        while (n > 1) {
            long long int call = game(n);
            count++;
            n = call;
        }

        printf("Case #%d: ", i);

        if (count % 2 == 0) {
            printf("Lili\n");
        } else {
            printf("Jojo\n");
        }
    }
    return 0;
}

