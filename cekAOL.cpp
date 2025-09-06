#include<stdio.h>
#include<string.h>
#include<stdlib.h>
FILE *fp;

struct fileData{
	char location[101];
	char city[101];
	int price;
	int rooms;
	int bathrooms;
	int carParks;
	char type[101];
	char furnish[101];
} data[4001];

char menuLocation[51];
char menuCity[51];
char menuPrice[51];
char menuRooms[51];
char menuBathroom[51];
char menuCarpark[51];
char menuType[51];
char menuFurnish[51];
char findData[21];
int findNum;

int totalRows;
int dataFound;
int count;
int isError;
int isSort;
char column[11];
char sortData[12];

void readFile(){
	fp = fopen("file.csv", "r");
	if (fp == NULL) {
    	printf("Error opening the file.\n");
    	isError = 1;
    	return;
	}
	
	fscanf(fp, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n",
			&menuLocation, &menuCity, &menuPrice, &menuRooms,
			&menuBathroom, &menuCarpark, &menuType, &menuFurnish);
			
	strcpy(menuLocation, "Location");
	strcpy(menuCity, "City");
	strcpy(menuPrice, "Price");
	strcpy(menuRooms, "Rooms");
	strcpy(menuBathroom, "Bathroom");
	strcpy(menuCarpark, "Carpark");
	strcpy(menuType, "Type");
	strcpy(menuFurnish, "Furnish");
	
	int i = 0;
	while(!feof(fp)){
		fscanf(fp, "%[^,],%[^,],%d,%d,%d,%d,%[^,],%[^\n]\n",
			&data[i].location, &data[i].city, &data[i].price, &data[i].rooms,
			&data[i].bathrooms, &data[i].carParks, &data[i].type, &data[i].furnish);
		i++;
	}
	totalRows = i;
	
	fclose(fp);
}

void displayMenuBar(){
	printf("%-27s %-14s %-10s %-7s %-10s %-9s %-11s %-10s\n",
			menuLocation, menuCity, menuPrice, menuRooms,
			menuBathroom, menuCarpark, menuType, menuFurnish);
}

void displayData(int rowsNum){
	count = 0;
	printf("\n");
	displayMenuBar();
	if(rowsNum > totalRows){
		for(int i = 0; i < totalRows; i++){
			printf("%-27s %-14s %-10d %-7d %-10d %-9d %-11s %-10s\n",
					data[i].location, data[i].city, data[i].price, data[i].rooms,
					data[i].bathrooms, data[i].carParks, data[i].type, data[i].furnish);
			count++;
		}
	} else{
		for(int j = 0; j < rowsNum; j++){
			printf("%-27s %-14s %-10d %-7d %-10d %-9d %-11s %-10s\n", 
					data[j].location, data[j].city, data[j].price, data[j].rooms,
					data[j].bathrooms, data[j].carParks, data[j].type, data[j].furnish);
			count++;
		}
	}
	
	printf("Total: %d\n", count);
}

void selectLocation(){
	for(int i = 0; i < totalRows; i++){
		if(strcmp(data[i].location, findData) == 0){
			dataFound = 1;
			break;
		} 
	}
	
	if(dataFound == 0){
		printf("Data not found!\n");
		return;
	}
	
	printf("Data found. Detail of data:\n");
	displayMenuBar();
	
	for(int i = 0; i < totalRows; i++){
		if(strcmp(data[i].location, findData) == 0){
			printf("%-27s %-14s %-10d %-7d %-10d %-9d %-11s %-10s\n", 
					data[i].location, data[i].city, data[i].price, data[i].rooms,
					data[i].bathrooms, data[i].carParks, data[i].type, data[i].furnish);
			count++;
		} 
	}
	printf("Count: %d\n", count);
}

void selectCity(){
	for(int i = 0; i < totalRows; i++){
		if(strcmp(data[i].city, findData) == 0){
			dataFound = 1;
			break;
		} 
	}
	
	if(dataFound == 0){
		printf("Data not found!\n");
		return;
	}
	
	printf("Data found. Detail of data:\n");
	displayMenuBar();
	
	for(int i = 0; i < totalRows; i++){
		if(strcmp(data[i].city, findData) == 0){
			printf("%-27s %-14s %-10d %-7d %-10d %-9d %-11s %-10s\n", 
					data[i].location, data[i].city, data[i].price, data[i].rooms,
					data[i].bathrooms, data[i].carParks, data[i].type, data[i].furnish);
			count++;
		} 
	}
	printf("Count: %d\n", count);
}

void selectPrice(){	
	for(int i = 0; i < totalRows; i++){
		if(data[i].price == findNum){
			dataFound = 1;
			break;
		} 
	}
	
	if(dataFound == 0){
		printf("Data not found!\n");
		return;
	}
	
	printf("Data found. Detail of data:\n");
	displayMenuBar();
	
	for(int i = 0; i < totalRows; i++){
		if(data[i].price == findNum){
			printf("%-27s %-14s %-10d %-7d %-10d %-9d %-11s %-10s\n", 
					data[i].location, data[i].city, data[i].price, data[i].rooms,
					data[i].bathrooms, data[i].carParks, data[i].type, data[i].furnish);
			count++;
		} 
	}
	printf("Count: %d\n", count);
}

void selectRooms(){	
	for(int i = 0; i < totalRows; i++){
		if(data[i].rooms == findNum){
			dataFound = 1;
			break;
		} 
	}
	
	if(dataFound == 0){
		printf("Data not found!\n");
		return;
	}
	
	printf("Data found. Detail of data:\n");
	displayMenuBar();
	
	for(int i = 0; i < totalRows; i++){
		if(data[i].rooms == findNum){
			printf("%-27s %-14s %-10d %-7d %-10d %-9d %-11s %-10s\n", 
					data[i].location, data[i].city, data[i].price, data[i].rooms,
					data[i].bathrooms, data[i].carParks, data[i].type, data[i].furnish);
			count++;
		} 
	}
	printf("Count: %d\n", count);
}

void selectBathroom(){	
	for(int i = 0; i < totalRows; i++){
		if(data[i].bathrooms == findNum){
			dataFound = 1;
			break;
		} 
	}
	
	if(dataFound == 0){
		printf("Data not found!\n");
		return;
	}
	
	printf("Data found. Detail of data:\n");
	displayMenuBar();
	
	for(int i = 0; i < totalRows; i++){
		if(data[i].bathrooms == findNum){
			printf("%-27s %-14s %-10d %-7d %-10d %-9d %-11s %-10s\n", 
					data[i].location, data[i].city, data[i].price, data[i].rooms,
					data[i].bathrooms, data[i].carParks, data[i].type, data[i].furnish);
			count++;
		} 
	}
	printf("Count: %d\n", count);
}

void selectCarpark(){	
	for(int i = 0; i < totalRows; i++){
		if(data[i].carParks == findNum){
			dataFound = 1;
			break;
		} 
	}
	
	if(dataFound == 0){
		printf("Data not found!\n");
		return;
	}
	
	printf("Data found. Detail of data:\n");
	displayMenuBar();
	
	for(int i = 0; i < totalRows; i++){
		if(data[i].carParks == findNum){
			printf("%-27s %-14s %-10d %-7d %-10d %-9d %-11s %-10s\n", 
					data[i].location, data[i].city, data[i].price, data[i].rooms,
					data[i].bathrooms, data[i].carParks, data[i].type, data[i].furnish);
			count++;
		} 
	}
	printf("Count: %d\n", count);
}

void selectType(){
	for(int i = 0; i < totalRows; i++){
		if(strcmp(data[i].type, findData) == 0){
			dataFound = 1;
			break;
		} 
	}
	
	if(dataFound == 0){
		printf("Data not found!\n");
		return;
	}
	
	printf("Data found. Detail of data:\n");
	displayMenuBar();
	
	for(int i = 0; i < totalRows; i++){
		if(strcmp(data[i].type, findData) == 0){
			printf("%-27s %-14s %-10d %-7d %-10d %-9d %-11s %-10s\n", 
					data[i].location, data[i].city, data[i].price, data[i].rooms,
					data[i].bathrooms, data[i].carParks, data[i].type, data[i].furnish);
			count++;
		} 
	}
	printf("Count: %d\n", count);
}

void selectFurnish(){
	for(int i = 0; i < totalRows; i++){
		if(strcmp(data[i].furnish, findData) == 0){
			dataFound = 1;
			break;
		} 
	}
	
	if(dataFound == 0){
		printf("Data not found!\n");
		return;
	}
	
	printf("Data found. Detail of data:\n");
	displayMenuBar();
	
	for(int i = 0; i < totalRows; i++){
		if(strcmp(data[i].furnish, findData) == 0){
			printf("%-27s %-14s %-10d %-7d %-10d %-9d %-11s %-10s\n", 
					data[i].location, data[i].city, data[i].price, data[i].rooms,
					data[i].bathrooms, data[i].carParks, data[i].type, data[i].furnish);
			count++;
		} 
	}
	printf("Count: %d\n", count);
}

void selectColumn(){
	dataFound = 0, count = 0; findNum = 0;
	if(strcmp(column, "Location") == 0){
		scanf("%s", &findData); getchar();
		selectLocation();
	} else if(strcmp(column, "City") == 0){
		scanf("%s", &findData); getchar();
		selectCity();
	} else if(strcmp(column, "Price") == 0){
		scanf("%d", &findNum); getchar();
		selectPrice();
	} else if(strcmp(column, "Rooms") == 0){
		scanf("%d", &findNum); getchar();
		selectRooms();
	} else if(strcmp(column, "Bathroom") == 0){
		scanf("%d", &findNum); getchar();
		selectBathroom();
	} else if(strcmp(column, "Carpark") == 0){
		scanf("%d", &findNum); getchar();
		selectCarpark();
	} else if(strcmp(column, "Type") == 0){
		scanf("%s", &findData); getchar();
		selectType();
	} else if(strcmp(column, "Furnish") == 0){
		scanf("%s", &findData); getchar();
		selectFurnish();
	}
}

void clearScreen(){
	char isValid;
	printf("Press enter to continue...\n");
	scanf("%c", &isValid);
	if(isValid == '\n'){
		system("cls");
	}
}

void printSort(){
	count = 0;
	for(int i = 0; i < 10; i++){
		printf("%-27s %-14s %-10d %-7d %-10d %-9d %-11s %-10s\n",
			data[i].location, data[i].city, data[i].price, data[i].rooms,
			data[i].bathrooms, data[i].carParks, data[i].type, data[i].furnish);
		count++;
	}
	printf("Count: %d\n", count);
}

void mergeLocationAsc(int left, int right){
	int mid = left + (right - left) / 2;
	struct fileData sortedArr[right - left + 1];
	int curr = 0;
	int leftIndex = left;
	int rightIndex = mid + 1;
	
	while(leftIndex <= mid && rightIndex <= right){
		if(strcmp(data[leftIndex].location, data[rightIndex].location) > 0){
			sortedArr[curr] = data[rightIndex];
			curr++, rightIndex++;
		} else if(strcmp(data[leftIndex].location, data[rightIndex].location) < 0){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		} else if(strcmp(data[leftIndex].location, data[rightIndex].location) == 0){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		}
	}
	
	while(leftIndex <= mid){
		sortedArr[curr] = data[leftIndex];
		curr++, leftIndex++;
	}
	while(rightIndex <= right){
		sortedArr[curr] = data[rightIndex];
		curr++, rightIndex++;
	}
	for(int i = 0; i < curr; i++){
		data[left + i] = sortedArr[i];
	}
}

void mergeLocationDes(int left, int right){
	int mid = left + (right - left) / 2;
	struct fileData sortedArr[right - left + 1];
	int curr = 0;
	int leftIndex = left;
	int rightIndex = mid + 1;
	
	while(leftIndex <= mid && rightIndex <= right){
		if(strcmp(data[leftIndex].location, data[rightIndex].location) < 0){
			sortedArr[curr] = data[rightIndex];
			curr++, rightIndex++;
		} else if(strcmp(data[leftIndex].location, data[rightIndex].location) > 0){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		} else if(strcmp(data[leftIndex].location, data[rightIndex].location) == 0){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		}
	}
	
	while(leftIndex <= mid){
		sortedArr[curr] = data[leftIndex];
		curr++, leftIndex++;
	}
	while(rightIndex <= right){
		sortedArr[curr] = data[rightIndex];
		curr++, rightIndex++;
	}
	for(int i = 0; i < curr; i++){
		data[left + i] = sortedArr[i];
	}
}

void mergeCityAsc(int left, int right){
	int mid = left + (right - left) / 2;
	struct fileData sortedArr[right - left + 1];
	int curr = 0;
	int leftIndex = left;
	int rightIndex = mid + 1;
	
	while(leftIndex <= mid && rightIndex <= right){
		if(strcmp(data[leftIndex].city, data[rightIndex].city) > 0){
			sortedArr[curr] = data[rightIndex];
			curr++, rightIndex++;
		} else if(strcmp(data[leftIndex].city, data[rightIndex].city) < 0){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		} else if(strcmp(data[leftIndex].city, data[rightIndex].city) == 0){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		}
	}
	
	while(leftIndex <= mid){
		sortedArr[curr] = data[leftIndex];
		curr++, leftIndex++;
	}
	while(rightIndex <= right){
		sortedArr[curr] = data[rightIndex];
		curr++, rightIndex++;
	}
	for(int i = 0; i < curr; i++){
		data[left + i] = sortedArr[i];
	}
}

void mergeCityDes(int left, int right){
	int mid = left + (right - left) / 2;
	struct fileData sortedArr[right - left + 1];
	int curr = 0;
	int leftIndex = left;
	int rightIndex = mid + 1;
	
	while(leftIndex <= mid && rightIndex <= right){
		if(strcmp(data[leftIndex].city, data[rightIndex].city) < 0){
			sortedArr[curr] = data[rightIndex];
			curr++, rightIndex++;
		} else if(strcmp(data[leftIndex].city, data[rightIndex].city) > 0){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		} else if(strcmp(data[leftIndex].city, data[rightIndex].city) == 0){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		}
	}
	
	while(leftIndex <= mid){
		sortedArr[curr] = data[leftIndex];
		curr++, leftIndex++;
	}
	while(rightIndex <= right){
		sortedArr[curr] = data[rightIndex];
		curr++, rightIndex++;
	}
	for(int i = 0; i < curr; i++){
		data[left + i] = sortedArr[i];
	}
}

void mergePriceAsc(int left, int right){
	int mid = left + (right - left) / 2;
	struct fileData sortedArr[right - left + 1];
	int curr = 0;
	int leftIndex = left;
	int rightIndex = mid + 1;
	
	while(leftIndex <= mid && rightIndex <= right){
		if(data[leftIndex].price > data[rightIndex].price){
			sortedArr[curr] = data[rightIndex];
			curr++, rightIndex++;
		} else if(data[leftIndex].price < data[rightIndex].price){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		} else if(data[leftIndex].price == data[rightIndex].price){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		}
	}
	
	while(leftIndex <= mid){
		sortedArr[curr] = data[leftIndex];
		curr++, leftIndex++;
	}
	while(rightIndex <= right){
		sortedArr[curr] = data[rightIndex];
		curr++, rightIndex++;
	}
	for(int i = 0; i < curr; i++){
		data[left + i] = sortedArr[i];
	}
}

void mergePriceDes(int left, int right){
	int mid = left + (right - left) / 2;
	struct fileData sortedArr[right - left + 1];
	int curr = 0;
	int leftIndex = left;
	int rightIndex = mid + 1;
	
	while(leftIndex <= mid && rightIndex <= right){
		if(data[leftIndex].price < data[rightIndex].price){
			sortedArr[curr] = data[rightIndex];
			curr++, rightIndex++;
		} else if(data[leftIndex].price > data[rightIndex].price){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		} else if(data[leftIndex].price == data[rightIndex].price){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		}
	}
	
	while(leftIndex <= mid){
		sortedArr[curr] = data[leftIndex];
		curr++, leftIndex++;
	}
	while(rightIndex <= right){
		sortedArr[curr] = data[rightIndex];
		curr++, rightIndex++;
	}
	for(int i = 0; i < curr; i++){
		data[left + i] = sortedArr[i];
	}
}

void mergeRoomsAsc(int left, int right){
	int mid = left + (right - left) / 2;
	struct fileData sortedArr[right - left + 1];
	int curr = 0;
	int leftIndex = left;
	int rightIndex = mid + 1;
	
	while(leftIndex <= mid && rightIndex <= right){
		if(data[leftIndex].rooms > data[rightIndex].rooms){
			sortedArr[curr] = data[rightIndex];
			curr++, rightIndex++;
		} else if(data[leftIndex].rooms < data[rightIndex].rooms){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		} else if(data[leftIndex].rooms == data[rightIndex].rooms){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		}
	}
	
	while(leftIndex <= mid){
		sortedArr[curr] = data[leftIndex];
		curr++, leftIndex++;
	}
	while(rightIndex <= right){
		sortedArr[curr] = data[rightIndex];
		curr++, rightIndex++;
	}
	for(int i = 0; i < curr; i++){
		data[left + i] = sortedArr[i];
	}
}

void mergeRoomsDes(int left, int right){
	int mid = left + (right - left) / 2;
	struct fileData sortedArr[right - left + 1];
	int curr = 0;
	int leftIndex = left;
	int rightIndex = mid + 1;
	
	while(leftIndex <= mid && rightIndex <= right){
		if(data[leftIndex].rooms < data[rightIndex].rooms){
			sortedArr[curr] = data[rightIndex];
			curr++, rightIndex++;
		} else if(data[leftIndex].rooms > data[rightIndex].rooms){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		} else if(data[leftIndex].rooms == data[rightIndex].rooms){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		}
	}
	
	while(leftIndex <= mid){
		sortedArr[curr] = data[leftIndex];
		curr++, leftIndex++;
	}
	while(rightIndex <= right){
		sortedArr[curr] = data[rightIndex];
		curr++, rightIndex++;
	}
	for(int i = 0; i < curr; i++){
		data[left + i] = sortedArr[i];
	}
}

void mergeBathroomAsc(int left, int right){
	int mid = left + (right - left) / 2;
	struct fileData sortedArr[right - left + 1];
	int curr = 0;
	int leftIndex = left;
	int rightIndex = mid + 1;
	
	while(leftIndex <= mid && rightIndex <= right){
		if(data[leftIndex].bathrooms > data[rightIndex].bathrooms){
			sortedArr[curr] = data[rightIndex];
			curr++, rightIndex++;
		} else if(data[leftIndex].bathrooms < data[rightIndex].bathrooms){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		} else if(data[leftIndex].bathrooms == data[rightIndex].bathrooms){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		}
	}
	
	while(leftIndex <= mid){
		sortedArr[curr] = data[leftIndex];
		curr++, leftIndex++;
	}
	while(rightIndex <= right){
		sortedArr[curr] = data[rightIndex];
		curr++, rightIndex++;
	}
	for(int i = 0; i < curr; i++){
		data[left + i] = sortedArr[i];
	}
}

void mergeBathroomDes(int left, int right){
	int mid = left + (right - left) / 2;
	struct fileData sortedArr[right - left + 1];
	int curr = 0;
	int leftIndex = left;
	int rightIndex = mid + 1;
	
	while(leftIndex <= mid && rightIndex <= right){
		if(data[leftIndex].bathrooms < data[rightIndex].bathrooms){
			sortedArr[curr] = data[rightIndex];
			curr++, rightIndex++;
		} else if(data[leftIndex].bathrooms > data[rightIndex].bathrooms){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		} else if(data[leftIndex].bathrooms == data[rightIndex].bathrooms){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		}
	}
	
	while(leftIndex <= mid){
		sortedArr[curr] = data[leftIndex];
		curr++, leftIndex++;
	}
	while(rightIndex <= right){
		sortedArr[curr] = data[rightIndex];
		curr++, rightIndex++;
	}
	for(int i = 0; i < curr; i++){
		data[left + i] = sortedArr[i];
	}
}

void mergeCarparkAsc(int left, int right){
	int mid = left + (right - left) / 2;
	struct fileData sortedArr[right - left + 1];
	int curr = 0;
	int leftIndex = left;
	int rightIndex = mid + 1;
	
	while(leftIndex <= mid && rightIndex <= right){
		if(data[leftIndex].carParks > data[rightIndex].carParks){
			sortedArr[curr] = data[rightIndex];
			curr++, rightIndex++;
		} else if(data[leftIndex].carParks < data[rightIndex].carParks){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		} else if(data[leftIndex].carParks == data[rightIndex].carParks){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		}
	}
	
	while(leftIndex <= mid){
		sortedArr[curr] = data[leftIndex];
		curr++, leftIndex++;
	}
	while(rightIndex <= right){
		sortedArr[curr] = data[rightIndex];
		curr++, rightIndex++;
	}
	for(int i = 0; i < curr; i++){
		data[left + i] = sortedArr[i];
	}
}

void mergeCarparkDes(int left, int right){
	int mid = left + (right - left) / 2;
	struct fileData sortedArr[right - left + 1];
	int curr = 0;
	int leftIndex = left;
	int rightIndex = mid + 1;
	
	while(leftIndex <= mid && rightIndex <= right){
		if(data[leftIndex].carParks < data[rightIndex].carParks){
			sortedArr[curr] = data[rightIndex];
			curr++, rightIndex++;
		} else if(data[leftIndex].carParks > data[rightIndex].carParks){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		} else if(data[leftIndex].carParks == data[rightIndex].carParks){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		}
	}
	
	while(leftIndex <= mid){
		sortedArr[curr] = data[leftIndex];
		curr++, leftIndex++;
	}
	while(rightIndex <= right){
		sortedArr[curr] = data[rightIndex];
		curr++, rightIndex++;
	}
	for(int i = 0; i < curr; i++){
		data[left + i] = sortedArr[i];
	}
}

void mergeTypeAsc(int left, int right){
	int mid = left + (right - left) / 2;
	struct fileData sortedArr[right - left + 1];
	int curr = 0;
	int leftIndex = left;
	int rightIndex = mid + 1;
	
	while(leftIndex <= mid && rightIndex <= right){
		if(strcmp(data[leftIndex].type, data[rightIndex].type) > 0){
			sortedArr[curr] = data[rightIndex];
			curr++, rightIndex++;
		} else if(strcmp(data[leftIndex].type, data[rightIndex].type) < 0){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		} else if(strcmp(data[leftIndex].type, data[rightIndex].type) == 0){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		}
	}
	
	while(leftIndex <= mid){
		sortedArr[curr] = data[leftIndex];
		curr++, leftIndex++;
	}
	while(rightIndex <= right){
		sortedArr[curr] = data[rightIndex];
		curr++, rightIndex++;
	}
	for(int i = 0; i < curr; i++){
		data[left + i] = sortedArr[i];
	}
}

void mergeTypeDes(int left, int right){
	int mid = left + (right - left) / 2;
	struct fileData sortedArr[right - left + 1];
	int curr = 0;
	int leftIndex = left;
	int rightIndex = mid + 1;
	
	while(leftIndex <= mid && rightIndex <= right){
		if(strcmp(data[leftIndex].type, data[rightIndex].type) < 0){
			sortedArr[curr] = data[rightIndex];
			curr++, rightIndex++;
		} else if(strcmp(data[leftIndex].type, data[rightIndex].type) > 0){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		} else if(strcmp(data[leftIndex].type, data[rightIndex].type) == 0){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		}
	}
	
	while(leftIndex <= mid){
		sortedArr[curr] = data[leftIndex];
		curr++, leftIndex++;
	}
	while(rightIndex <= right){
		sortedArr[curr] = data[rightIndex];
		curr++, rightIndex++;
	}
	for(int i = 0; i < curr; i++){
		data[left + i] = sortedArr[i];
	}
}

void mergeFurnishAsc(int left, int right){
	int mid = left + (right - left) / 2;
	struct fileData sortedArr[right - left + 1];
	int curr = 0;
	int leftIndex = left;
	int rightIndex = mid + 1;
	
	while(leftIndex <= mid && rightIndex <= right){
		if(strcmp(data[leftIndex].furnish, data[rightIndex].furnish) > 0){
			sortedArr[curr] = data[rightIndex];
			curr++, rightIndex++;
		} else if(strcmp(data[leftIndex].furnish, data[rightIndex].furnish) < 0){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		} else if(strcmp(data[leftIndex].furnish, data[rightIndex].furnish) == 0){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		}
	}
	
	while(leftIndex <= mid){
		sortedArr[curr] = data[leftIndex];
		curr++, leftIndex++;
	}
	while(rightIndex <= right){
		sortedArr[curr] = data[rightIndex];
		curr++, rightIndex++;
	}
	for(int i = 0; i < curr; i++){
		data[left + i] = sortedArr[i];
	}
}

void mergeFurnishDes(int left, int right){
	int mid = left + (right - left) / 2;
	struct fileData sortedArr[right - left + 1];
	int curr = 0;
	int leftIndex = left;
	int rightIndex = mid + 1;
	
	while(leftIndex <= mid && rightIndex <= right){
		if(strcmp(data[leftIndex].furnish, data[rightIndex].furnish) < 0){
			sortedArr[curr] = data[rightIndex];
			curr++, rightIndex++;
		} else if(strcmp(data[leftIndex].furnish, data[rightIndex].furnish) > 0){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		} else if(strcmp(data[leftIndex].furnish, data[rightIndex].furnish) == 0){
			sortedArr[curr] = data[leftIndex];
			curr++, leftIndex++;
		}
	}
	
	while(leftIndex <= mid){
		sortedArr[curr] = data[leftIndex];
		curr++, leftIndex++;
	}
	while(rightIndex <= right){
		sortedArr[curr] = data[rightIndex];
		curr++, rightIndex++;
	}
	for(int i = 0; i < curr; i++){
		data[left + i] = sortedArr[i];
	}
}

void mergeSort(int left, int right){
	if(left < right){
		int mid = left + (right - left) / 2;
		mergeSort(left, mid);
		mergeSort(mid + 1, right);
		
		if(strcmp(column, "Location") == 0){
			if(strcmp(sortData, "asc") == 0){
				mergeLocationAsc(left, right);
			} else if(strcmp(sortData, "des") == 0){
				mergeLocationDes(left, right);
			}
		} else if(strcmp(column, "City") == 0){
			if(strcmp(sortData, "asc") == 0){
				mergeCityAsc(left, right);
			} else if(strcmp(sortData, "des") == 0){
				mergeCityDes(left, right);
			}
		} else if(strcmp(column, "Price") == 0){
			if(strcmp(sortData, "asc") == 0){
				mergePriceAsc(left, right);
			} else if(strcmp(sortData, "des") == 0){
				mergePriceDes(left, right);
			}
		} else if(strcmp(column, "Rooms") == 0){
			if(strcmp(sortData, "asc") == 0){
				mergeRoomsAsc(left, right);
			} else if(strcmp(sortData, "des") == 0){
				mergeRoomsDes(left, right);
			}
		} else if(strcmp(column, "Bathroom") == 0){
			if(strcmp(sortData, "asc") == 0){
				mergeBathroomAsc(left, right);
			} else if(strcmp(sortData, "des") == 0){
				mergeBathroomDes(left, right);
			}
		} else if(strcmp(column, "Carpark") == 0){
			if(strcmp(sortData, "asc") == 0){
				mergeCarparkAsc(left, right);
			} else if(strcmp(sortData, "des") == 0){
				mergeCarparkDes(left, right);
			}
		} else if(strcmp(column, "Type") == 0){
			if(strcmp(sortData, "asc") == 0){
				mergeTypeAsc(left, right);
			} else if(strcmp(sortData, "des") == 0){
				mergeTypeDes(left, right);
			}
		} else if(strcmp(column, "Furnish") == 0){
			if(strcmp(sortData, "asc") == 0){
				mergeFurnishAsc(left, right);
			} else if(strcmp(sortData, "des") == 0){
				mergeFurnishDes(left, right);
			}
		}
	}
}

void writeFile(char inputFileName[]){
	strcat(inputFileName, ".csv");
	fp = fopen(inputFileName, "w");
	if(fp == NULL){
		return;
	}
	
	fprintf(fp, "%s,%s,%s,%s,%s,%s,%s,%s\n",
			menuLocation, menuCity, menuPrice, menuRooms,
			menuBathroom, menuCarpark, menuType, menuFurnish);
	
	for(int i = 0; i < totalRows; i++){
		fprintf(fp, "%s,%s,%d,%d,%d,%d,%s,%s\n",
				data[i].location, data[i].city, data[i].price, data[i].rooms,
				data[i].bathrooms, data[i].carParks, data[i].type, data[i].furnish);
	}
	
	fclose(fp);
}

int main(){
	if(isSort == 0){
		readFile();
	}
	
	if(isError == 1){
		return 1;
	}
	
	printf("What do you want to do?\n");
	printf("1. Display data\n");
	printf("2. Search data\n");
	printf("3. Sort data\n");
	printf("4. Export data\n");
	printf("5. Exit\n");
	printf("Your choice: ");
	
	int inputNum = 0;
	scanf("%d", &inputNum); getchar();
	int rowsNum = 0;
	
	switch(inputNum){
		case 1:
			printf("Number of rows: ");
			scanf("%d", &rowsNum); getchar();
			
			displayData(rowsNum);
			clearScreen();
			main();
			break;
		
		case 2:
			for (int j = 0; j < sizeof(column); j++) {
        		column[j] = '\0';
    		}
			printf("Choose column: ");
			scanf("%s", &column); getchar();
			printf("What data do you want to find? ");
			
			selectColumn();
			clearScreen();
			main();
			break;
			
		case 3:
			isSort = 0;
			readFile();
			for (int j = 0; j < sizeof(column); j++) {
        		column[j] = '\0';
    		} for (int j = 0; j < sizeof(sortData); j++) {
        		sortData[j] = '\0';
    		}
			printf("Choose column: ");
			scanf("%s", &column); getchar();
			printf("Sort ascending or descending? ");
			scanf("%s", &sortData); getchar();
			
			mergeSort(0, totalRows-1);
			isSort = 1;
						
			printSort();
			clearScreen();
			main();
			break;
			
		case 4:
			printf("File name: ");
			char inputFileName[101];
			scanf("%s", &inputFileName); getchar();
			writeFile(inputFileName);
			printf("Data successfully written to file %s!\n", inputFileName);
			clearScreen();
			main();
			break;
			
		case 5:
			printf("Thank you for using this program!\n");
			break;
			
		default:
			printf("Invalid choice. Please enter a number between 1 and 5.\n");
			clearScreen();
			main();
			break;
	}
	
	return 0;
}
