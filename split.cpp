#include<stdio.h>
int main()
{	
	int t;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++){
		int n;
		scanf("%d", &n);
		int arr[n+2];
		
		int total = 0;
		for(int j = 0; j < n; j++){
			scanf("%d", &arr[j]);
			total += arr[j];
		}
		
		int jumlaharray = 0;
		int benar = 1;
		for(int j = 0; j < n; j++){
			if(jumlaharray == total - jumlaharray){
				benar = 0;
				break;
			}
			jumlaharray += arr[j];
		}
		printf("Case #%d: ", i+1);
		if(benar == 0){
			printf("Yes\n");
		} else{
			printf("No\n");
		}
	}
	
	return 0;
}
