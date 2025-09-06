#include<stdio.h>
int main(){
    long long int T;
	long long int N, K;
	long long int character;
	
    scanf("%lld", &T);
    
    for(int i = 0; i < T; i++){
        scanf("%lld %lld", &N, &K);
        getchar();
        
        char x[N];
        scanf("%s", &x);
        getchar();
        
        for(int j = 0; j < N; j++){
            character = (x[j] - 'a' + K) % 26;
            x[j] = character + 'a';
        }
        printf("Case #%d: %s\n", (i + 1), x);
    }
}
