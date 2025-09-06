#include <stdio.h>
#include <string.h>

FILE *fp;

struct viewer {
    char title[1001];
    char nama[1001];
    int view;
};

void merge(struct viewer vid[], int left, int right){
	int mid = left + (right - left) / 2;
	struct viewer sortedArr[right - left+1];
	int curr = 0;
	int leftindex = left;
	int rightindex = mid+1;
	
	while(leftindex <= mid && rightindex <= right){
		if(vid[leftindex].view < vid[rightindex].view){
			sortedArr[curr] = vid[rightindex];
			curr++;
			rightindex++;
		} else if(vid[leftindex].view > vid[rightindex].view){
			sortedArr[curr] = vid[leftindex];
			curr++;
			leftindex++;
		} else if(vid[leftindex].view == vid[rightindex].view){
			if(strcmp(vid[leftindex].title, vid[rightindex].title) > 0){
				sortedArr[curr] = vid[rightindex];
				curr++;
				rightindex++;
			}
		}
	}
	
	while(leftindex <= mid){
		sortedArr[curr] = vid[leftindex];
		curr++;
		leftindex++;
	}
	
	while(rightindex <= right){
		sortedArr[curr] = vid[rightindex];
		curr++;
		rightindex++;
	}
	
	for(int i = 0; i < curr; i++){
		vid[left+i] = sortedArr[i];
	}
}

void mergeSort(struct viewer vid[], int left, int right){
	if(left < right){
		int mid = left + (right - left) / 2;
		
		mergeSort(vid, left, mid);
		mergeSort(vid, mid+1, right);
		
		merge(vid, left, right);
	}
}

int main() {
    struct viewer vid[101];

    fp = fopen("videodata.txt", "r");

    int i = 0;
    while (fscanf(fp, "%[^#]#%[^#]#%d\n", vid[i].title, vid[i].nama, &vid[i].view) == 3) {
        i++;
    }

    int size = i;

    mergeSort(vid, 0, size-1);

    for (int j = 0; j < size; j++) {
        printf("%s by %s - %d\n", vid[j].title, vid[j].nama, vid[j].view);
    }

    fclose(fp);

    return 0;
}

