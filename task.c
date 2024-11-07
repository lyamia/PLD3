#include <stdio.h>

/**
 * Function to find and return the address of the largest element in the array
 */
int* largest(int arr[], int size) {
    if (size <= 0) {
        return NULL;
    }

    int* s = arr;

    for (int i = 1; i < size; i++) {
        if (arr[i] > *s) {
            s = &arr[i];
        }
    }

    return s;
}

int main() {
    int arr[] = {1, 24, 35, 12, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int* largestElement = largest(arr, size);

    if (largestElement != NULL) {
        printf("The address of the largest element is %p\n", (void*)largestElement);
    } else {
        printf("The array is empty.\n");
    }

    return 0;
}
