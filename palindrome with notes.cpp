#include <stdio.h>
#include <string.h>

// Fungsi untuk memeriksa apakah sebuah string merupakan palindrom atau bukan
int isPalindrome(char str[], int start, int end) {
    if (start >= end) {
        return 1; // Basis: Jika start lebih besar atau sama dengan end, itu adalah palindrom
    }

    // Pembandingkan karakter di posisi start dan end
    if (str[start] == str[end]) {
        // Jika karakter sama, periksa sisa string
        return isPalindrome(str, start + 1, end - 1);
    } else {
        return 0; // Jika karakter tidak sama, bukan palindrom
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        char S[1001];
        scanf("%s", S);

        int length = strlen(S);

        // Panggil fungsi isPalindrome untuk memeriksa apakah string palindrom atau tidak
        int result = isPalindrome(S, 0, length - 1);

        // Tampilkan hasil sesuai format
        printf("Case#%d: %s\n", i, (result ? "yes" : "no"));
    }

    return 0;
}

