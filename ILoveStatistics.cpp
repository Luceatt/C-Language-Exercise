#include<stdio.h>

void sort(double arr[], double n){
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n-i-1; j++){
			if(arr[j] > arr[j+1]){
				double temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main(){
	int t;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++){
		int n;
		scanf("%d", &n);
		
		double arr[n+1];
		double total = 0;
		
		for(int j = 0; j < n; j++){
			scanf("%lf", &arr[j]);
			total += arr[j];
		}
		
		sort(arr, n);
		
		double mean = total/n;
		double median = 0;
		
		if(n == 1){
			median = arr[0];
		}else if(n % 2 == 0){
			median = (arr[n/2] + arr[(n/2) - 1]) / 2;
		} else{
			median = arr[n/2];
		}
		
		printf("Case #%d:\n", i+1);
		printf("Mean : %.2lf\n", mean);
		printf("Median : %.2lf\n", median);
		
	}
	
	return 0;
}
