#include <stdio.h>

int recursiveMaximum(int arr[], int index, int len);

int main() {
    int myArr[] = {1, 52, 23, 64, 95, 14, 77};
    int max = recursiveMaximum(myArr, 0, sizeof(myArr) / sizeof(myArr[0]));
    printf("The maximum value is: %d\n", max);

    return 0;
}

int recursiveMaximum(int arr[], int index, int len) {
    if(index >= len - 1) { 
        return arr[index];
    } else {
        int max = recursiveMaximum(arr, index + 1, len);
        return (arr[index] > max) ? arr[index] : max;
    }
}
