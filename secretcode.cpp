#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int ubah;
        char string[1002];
        scanf("%d %s", &ubah, string);

        for (int j = 0; j < ubah; j++) {
            int indeks, tukar;
            scanf("%d %d", &indeks, &tukar);
            char temp[1001];
            int index = 0;

            for (int k = indeks - 1; k < tukar; k++) {
                temp[index] = string[k];
                index++;
            }

            index = 0;
            for (int k = tukar - 1; k >= indeks - 1; k--) {
                string[k] = temp[index];
                index++;
            }
        }

        printf("Case #%d: ", i);
        for (int j = 0; j < strlen(string); j++) {
            printf("%c", string[j]);
        }
        printf("\n");
    }
    return 0;
}

