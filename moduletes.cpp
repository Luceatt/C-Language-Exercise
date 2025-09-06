#include <stdio.h>

void sum() {
	int x = x + x;
}

int main() {
    int num = 5; // Ini adalah argument

    printf("Number before: %d\n", num);
    sum();
    printf("Number after: %d\n", num); // Nilai num tetap sama

    return 0;
}

