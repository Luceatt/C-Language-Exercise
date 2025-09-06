#include<stdio.h>
#include<string.h>

int main() {
    int T;
    scanf("%d", &T);
	
    for(int t = 1; t <= T; t++){
        char string[1001];
        scanf("%s", string);

        printf("Case %d: ", t);

        for(int j = 0; j < strlen(string); j++){
            printf("%d", string[j]);

            if(j < strlen(string) - 1){
                printf("-");
            }
        }
        printf("\n");
    }

    return 0;
}
