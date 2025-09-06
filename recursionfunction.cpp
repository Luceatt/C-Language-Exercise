#include <stdio.h>

int count = 0;

int function(int n) {
    if(n % 3 == 0 && n > 0){
    	count++;
	} 
	if (n % 5 == 0 && n > 0) {
	        return (n * 2);
	} else{
		if (n == 0) {
	        return 1;
	    } else if (n == 1) {
	        return 2;
	    } else {
	        return function(n - 1) + n + function(n - 2) + (n - 2);
	    }
	}
}

int main() {
    int t;
    scanf("%d", &t);
    for (int j = 1; j <= t; j++) {
        int N;
        scanf("%d", &N);
        
        count = 0;
        int result = function(N);
        printf("Case #%d: %d %d\n", j, result, count);
    }

    return 0;
}

