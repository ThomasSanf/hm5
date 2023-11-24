#include <stdio.h>

void swap(int *element1Ptr, int *element2Ptr) {
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}

void bubbleSort(int * const array, const int size) {
    int pass, j;

    for (pass = 0; pass < size - 1; pass++) {
        for (j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

int main() {
    int array[] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Data items in original order\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    bubbleSort(array, size);

    printf("\nData items in ascending order\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
    return 0;
}
