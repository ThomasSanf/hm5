#include <stdio.h>

int binarySearch(const int b[], int searchKey, int low, int high);

int main() {
    int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int length = sizeof(array) / sizeof(array[0]);
    int key = 10;

    int result = binarySearch(array, key, 0, length - 1);

    if (result != -1) {
        printf("Found value in array at subscript %d\n", result);
    } else {
        printf("Value not found in array.\n");
    }

    return 0;
}

int binarySearch(const int b[], int searchKey, int low, int high) {
    if (low > high) {
        return -1;
    }

    int mid = (low + high) / 2;

    if (searchKey == b[mid]) {
        return mid;
    } else if (searchKey < b[mid]) {
        return binarySearch(b, searchKey, low, mid - 1);
    } else {
        return binarySearch(b, searchKey, mid + 1, high);
    }
}
