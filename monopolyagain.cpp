#include <stdio.h>

int main() {
    int N, i, k, position;

    scanf("%d", &N);
    position = 0;

    for (i = 0; i < N; i++) {
        scanf("%d", &k);

        position += k;

        if (position == 12) {
            position = 28;
        } else if (position == 35) {
            position = 7;
        } else if (position == 30) {
            position = 10;
        } else if (position > 40) {
        	position = position % 40;
    	}
    }

    printf("%d\n", position);

    return 0;
}

