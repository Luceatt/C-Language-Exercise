#include<stdio.h>
int countA;
int countB;
int posA = 1;
int posB = 1;

void mobilA(int carA1, int carA2, int carA3, int position){
	while(posA < position && posA < carA1){
		posA += 1;
		countA++;
		printf("Position A: %d\n", posA);
		printf("Count A: %d\n", countA);
		
		if(posA >= position){
			break;
		}
	}
	
	while(posA < position){
		posA += carA1;
		countA++;
		printf("Position A: %d\n", posA);
		printf("Count A: %d\n", countA);
		
		if(posA >= carA2 || posA >= position){
			break;
		}
	}
	
	while(posA < position){
		posA += carA2;
		countA++;
		printf("Position A: %d\n", posA);
		printf("Count A: %d\n", countA);
		
		if(posA >= carA3 || posA >= position){
			break;
		}
	}
	
	while(posA < position){
		posA += carA3;
		countA++;
		printf("Position A: %d\n", posA);
		printf("Count A: %d\n", countA);
		
		if(posA >= position){
			break;
		}
	}
}

void mobilB(int carB1, int carB2, int carB3, int position){
	while(posB < position && posB < carB1){
		posB += 1;
		countB++;
		printf("Position B: %d\n", posB);
		printf("Count B: %d\n", countB);
		
		if(posB >= position){
			break;
		}
	}
	
	while(posB < position){
		posB += carB1;
		countB++;
		printf("Position B: %d\n", posB);
		printf("Count B: %d\n", countB);
		
		if(posB >= carB2 || posB >= position){
			break;
		}
	}
	
	while(posB < position){
		posB += carB2;
		countB++;
		printf("Position B: %d\n", posB);
		printf("Count B: %d\n", countB);
		
		if(posB >= carB3 || posB >= position){
			break;
		}
	}
	
	while(posB < position){
		posB += carB3;
		countB++;
		printf("Position B: %d\n", posB);
		printf("Count B: %d\n", countB);
		
		if(posB >= position){
			break;
		}
	}
}
int main(){
	int carA1;
	int carA2;
	int carA3;
	int carB1;
	int carB2;
	int carB3;
	int position;
	
	scanf("%d %d %d %d %d %d %d", &carA1, &carA2, &carA3, &carB1, &carB2, &carB3, &position);
	
	mobilA(carA1, carA2, carA3, position);
	mobilB(carB1, carB2, carB3, position);
	
	if(countA > countB){
		printf("2\n");
	} else if(countA < countB){
		printf("1\n");
	} else if(countA == countB){
		if(posA > posB){
			printf("1\n");
		} else if(posA < posB){
			printf("2\n");
		} else if(posA == posB){
			printf("-1\n");
		}
	}
	
	return 0;
}
