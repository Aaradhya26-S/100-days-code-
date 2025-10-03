
#include <stdio.h>

int main() {
    int arr[100], n, i, elem, pos;

    printf("Enter number of elements in the sorted array: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &elem);

    // Find position to insert
    pos = n;
    for(i = 0; i < n; i++) {
        if(arr[i] > elem) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for(i = n; i > pos; i--)
        arr[i] = arr[i-1];

    arr[pos] = elem;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}