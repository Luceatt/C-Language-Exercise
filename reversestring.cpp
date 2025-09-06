#include<stdio.h>
#include<string.h>

int main() {
    int T;
    scanf("%d", &T);
	
    for(int t = 1; t <= T; t++){
        char string[1001];
        scanf("%s", string);

        printf("Case #%d : ", t);
        int panjang = strlen(string);

        for(int j = panjang-1; j >= 0; j--){
		printf("%c", string[j]);
        }
        printf("\n");
    }

    return 0;
}
