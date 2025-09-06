#include <stdio.h>

char map[101][101];

struct kerajaan{
    char alpha;
    int jumlah;
};


void floodfill(struct kerajaan arr[], int x, int y, int i){
    if(map[x][y] == '#' || map[x][y] == '\n' || map[x][y] == '\0' || x<0 || y<0){
        return;
    }

    if(map[x][y] == '.'){
        arr[i].jumlah++;
    }

    map[x][y] = '#';

    floodfill(arr, x+1, y, i);
    floodfill(arr, x-1, y, i);
    floodfill(arr, x, y+1, i);
    floodfill(arr, x, y-1, i);
}

void swap(struct kerajaan *a, struct kerajaan *b){
    struct kerajaan temp = *a;
    *a = *b;
    *b = temp;
}

void sort(struct kerajaan arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j].alpha>arr[j+1].alpha){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main(){
int n, huruf, i, j, k;
scanf("%d %d", &n, &huruf); getchar();
int x_index[huruf], y_index[huruf];
struct kerajaan kingdom[huruf];

int anu = 0;
for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        scanf(" %c", &map[i][j]);
        if(map[i][j] >= 'a' && map[i][j] <= 'z'){
            x_index[anu] = i;
            y_index[anu] = j;
            kingdom[anu].alpha = map[i][j];
            kingdom[anu].jumlah = 0;
            anu++;
        }
    }
}

for(i=0; i<huruf; i++){
    floodfill(kingdom, x_index[i], y_index[i], i);
}

sort(kingdom, huruf);

for(i=0; i<huruf; i++){
    printf("%c %d\n", kingdom[i].alpha, kingdom[i].jumlah);
}

for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        map[i][j] = '\0';
    }
}

    return 0;
}
