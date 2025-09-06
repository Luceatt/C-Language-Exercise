#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	long long int n;
	for(int i = 0; i < t; i++){
		scanf("%lld", &n);
		long long int arr[n+2];
		
		for(long long int j = 0; j < n; j++){
			scanf("%lld", &arr[j]);
		}
		
		long long int total = 0;
		long long int hasil = 0;
		long long int jumlah_biton = 0;
		long long int biton;
		
		for(int j = 0; j < n; j++){
			for(int k = j + 1; k < n; k++){
				hasil = arr[j] ^ arr[k];
				total++;
				biton = 0;
				
				for(int m = 0; m <= 20; m++){
					if((hasil & (1 << m)) > 0){
						biton++;
					}
					if(biton >= 3){
						break;
					}
				}
				if(biton >= 3){
					jumlah_biton++;
				}
			} 
		}
		printf("Case #%d: %d %d\n", i+1, jumlah_biton, (total - jumlah_biton));
	}
	return 0;
}
