#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    getchar();
	char input[105];
	for (int k = 0; k < t; k++) {
		scanf("%s", input); getchar();
	
	    bool isValid = true;
	    int length = strlen(input);
	
// Persyaratan pertama: Setiap angka harus mengapit satu '.'
    for (int i = 0; i < length; i++) {
        if (input[i] == '.') {
            if (i == 0 || i == length - 1 || input[i - 1] == '.' || input[i + 1] == '.') {
                isValid = false;
                break;
            }
        }
    }

    // Persyaratan kedua: Setiap string tidak boleh diawali atau diakhiri dengan '.'
    if (input[0] == '.' || input[length - 1] == '.') {
        isValid = false;
    }

    // Persyaratan tambahan: Setiap angka harus mengapit satu '.'
    for (int i = 1; i < length - 1; i++) {
        if (input[i] != '.' && input[i - 1] != '.' && input[i + 1] != '.') {
            isValid = false;
            break;
        }
    }
	
	printf("Case #%d: ", k+1);
	    if (isValid) {
	        printf("YES\n");
	    } else {
	        printf("NO\n");
	    }
	}
    return 0;
}

