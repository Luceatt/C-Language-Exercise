#include <stdio.h>
#include <math.h>
int main() {
    int N, X, Y;
    int jumlah_bakteri;
    scanf("%d %d %d", &N, &X, &Y);

	jumlah_bakteri = N * pow(2, (Y / X));

    printf("%d\n", jumlah_bakteri);

    return 0;
}
