#include <stdio.h>
int main() {
    int arr[100];
    int n;
    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    // Input the elements of the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Print unique elements
    printf("Unique elements in the array: ");
    for (int i = 0; i < n; i++) {
        int isUnique = 1; // Flag to check uniqueness
        // Check if arr[i] is a duplicate
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0; // Not unique
                break;
            }
        }
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}
