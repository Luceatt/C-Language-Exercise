#include<stdio.h>
struct data{
	int nilai;
	char nama[11];
};

int search(struct data dt[], int left, int right, int find){
	if(left <= right){
		int mid = left + (right - left) / 2;
		
		if(dt[mid].nilai == find){
			return mid;
		} else if(dt[mid].nilai < find){
			return search(dt, left, mid-1, find);
		} else if(dt[mid].nilai > find){
			return search(dt, mid+1, right, find);
		}
	}
	return -1;
}
int main(){
	int t;
	scanf("%d", &t);
	
	struct data dt[t+1];
	for(int i = 0; i < t; i++){
		scanf("%d", &dt[i].nilai); getchar();
	}
	
	for(int i = 0; i < t; i++){
		scanf("%s", &dt[i].nama);
	}
	getchar();
	
	int find;
	scanf("%d", &find);
	
	int index = search(dt, 0, t, find);
	
	if(index == -1){
		printf("-1 null -1\n");
	} else{
		index = index + 1;
		int letak = 0;
		int part1 = t/4;
		int part2 = part1*2;
		int part3 = part1*3;
		int part4 = t;
		
		if(index > 0 && index <= part1){
			letak = 1;
		} else if(index > part1 && index <= part2){
			letak = 2;
		} else if(index > part2 && index <= part3){
			letak = 3;
		} else if(index > part3 && index <= part4){
			letak = 4;
		}
		
		printf("%d %s %d\n", index, dt[index-1].nama, letak);
	}
	return 0;	
}
