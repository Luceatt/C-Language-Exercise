#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	int n;
	
	for(int i = 0; i < t; i++){
		scanf("%d", &n);
		int arr[n+2];
		for(int j = 0; j < n; j++){
			scanf("%d", &arr[j]);
		}
		int p, q;
		scanf("%d %d", &p, &q);
		
		if(p != q){
			printf("Case #%d : ", i+1);
			if(arr[p-1] == arr[q-1]){
				printf("Draw\n");
			} else if(arr[p-1] > arr[q-1]){
				printf("Bibi\n");
			} else if(arr[p-1] < arr[q-1]){
				printf("Lili\n");
			}
		}
	}
	
	return 0;
}
