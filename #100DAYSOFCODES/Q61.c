//Q61 Search for an element in an array using linear search.
#include <stdio.h>

int main() {
    int n, key, found = 0;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear Search
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at position %d (index %d)\n", key, i + 1, i);
            found = 1;
            break; // stop after first match
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
