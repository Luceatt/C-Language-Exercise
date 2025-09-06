#include <stdio.h>

int search(int arr[], int size, int a)
{
	int left = 0;
	int right = size - 1;
	
	while(left <= right)
	{
		int mid = (left + right) / 2;
		
		if(arr[mid] == a)
		{
			if(arr[mid - 1] == a)
				right = mid - 1;
			else
				return mid + 1;
		}
		else if(arr[mid] > a)
		{
			right = mid - 1;
		}
		else if(arr[mid] < a)
		{
			left = mid + 1;
		}
	}
	return -1;
}

int main() {
	int size, n;
	int a;
	scanf("%d %d", &size, &n);
	
	int arr[size + 1] = {};
	
	for(int i = 0; i < size; i++)
		scanf("%d", &arr[i]);
		
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		
		printf("%d\n", search(arr, size, a));
	}
	
	return 0;
}
