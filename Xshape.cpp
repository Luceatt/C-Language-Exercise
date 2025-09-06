#include<stdio.h>
int main()
{
//	*********
//	**     **
//	* *   * *
//	*  * *  *
//	*   *   *
//	*  * *  *
//	* *   * *
//	**     **
//	*********

//	*******
//	**   **
//	* * * *
//	*  *  *
//	* * * *
//	**   **
//	*******
//	
//	*****
//	** **
//	* * *
//	** **
//	*****
//	
//	***
//	***
//	***

	int t;
	scanf("%d", &t);
	int n;
	for(int i = 0; i < t; i++){
		scanf("%d", &n);
		
		for(int j = 0; j < n; j++){
			for(int k = 0; k < n; k++){
				if(j == 0 || k == 0 || j == n-1 || k == n-1 || j == k || k == n-j-1){
					printf("*");
				} else{
					printf(" ");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}
