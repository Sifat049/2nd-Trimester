#include <stdio.h>

void deleteFromArray(int arr[], int n, int pos) {
    if (pos < 0 || pos >= n) {
        printf("Invalid position\n");
    } else {
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        printf("Array after deletion:\n");
        for (int i = 0; i < n - 1; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers separated by space: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int pos;
    printf("Enter the position to delete: ");
    scanf("%d", &pos);
    deleteFromArray(arr, n, pos);
    return 0;
}
