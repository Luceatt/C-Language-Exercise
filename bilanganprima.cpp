#include<stdio.h>
int main()
{
	int n;
	
	int isPrime = 1;
	
	scanf("%d", &n);
	
	for (int i = 2; i <= n/2; i++) {
            if (n % i == 0) {
                isPrime = 0; // Jika ada pembagian yang habis, maka bukan bilangan prima
                break;
                printf("%d", i);
            }
        }

        if (isPrime == 1) {
            printf("%d adalah bilangan prima.\n", n);
        } else {
            printf("%d bukan bilangan prima.\n", n);
        }
	
	return 0;
}
