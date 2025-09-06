#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end) {
    if (start >= end) {
        return 1;     
	}

    if (str[start] == str[end]) {
        return isPalindrome(str, start + 1, end - 1);
    } else {
        return 0;
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        char S[1001];
        scanf("%s", S);

        int length = strlen(S);

        int result = isPalindrome(S, 0, length - 1);

        printf("Case #%d: ", i);
        
        if(result == 0){
        	printf("no\n");
		} else if(result == 1){
			printf("yes\n");
		}
        
    }

    return 0;
}

