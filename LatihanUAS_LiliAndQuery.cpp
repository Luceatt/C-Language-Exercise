#include<stdio.h>

long long int search(long long int array[], long long int left, long long int right, long long int find) {
    if (left <= right) {
        long long int mid = left + (right - left) / 2;
        if (array[mid] == find) {
            if (mid > 0 && array[mid - 1] == find) {
                return search(array, left, mid - 1, find);
            } else {
                return mid + 1;
            }
        } else if (array[mid] < find) {
            return search(array, mid + 1, right, find);
        }	else if (array[mid] > find) {
            return search(array, left, mid - 1, find);
        }
    }

    return -1;
}

int main() {
    long long int size;
    long long int test;
    scanf("%lld %lld", &size, &test);

    long long int array[size+1];
    for (long long int i = 0; i < size; i++) {
        scanf("%lld", &array[i]);
    }

    long long int find;
    for (long long int i = 0; i < test; i++) {
        scanf("%lld", &find);

        long long int idx = search(array, 0, size, find);
        printf("%lld\n", idx);
    }
    return 0;
}

