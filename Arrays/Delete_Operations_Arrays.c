#include <stdio.h>

void deleteAtBegin(int a[], int *size);
void deleteAtPos(int a[], int *size);
void deleteAtEnd(int a[], int *size);

int main() {
    int a[50], i, n, size, k = 1;

    printf("Enter the size of the Array\n");
    scanf("%d", &size);

    if (size > 50) {
        printf("Size exceeds array capacity. Maximum size is 50.\n");
        return 1;
    }

    printf("Enter the elements in the Array\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    printf("Initial Array:\n");
    for (i = 0; i < size; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    while (k) {
        printf("\nEnter:\n 1 for delete at beginning\n 2 for delete at position\n 3 for delete at end\n 0 to exit\n");
        scanf("%d", &n);

        switch (n) {
            case 1:
                deleteAtBegin(a, &size);
                break;
            case 2:
                deleteAtPos(a, &size);
                break;
            case 3:
                deleteAtEnd(a, &size);
                break;
            case 0:
                k = 0;
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

void deleteAtPos(int a[], int *size) {
    if (*size == 0) {
        printf("The array is empty\n");
        return;
    }

    int pos, i;
    printf("Enter the position of the element that you want to delete in the array (1-based index):\n");
    scanf("%d", &pos);

    if (pos < 1 || pos > *size) {
        printf("Invalid position. Enter a position between 1 and %d.\n", *size);
    } else {
        int item = a[pos - 1];
        printf("Deleted Element is: %d\n", item);

        for (i = pos - 1; i < *size - 1; i++) {
            a[i] = a[i + 1];
        }

        (*size)--;

        printf("Updated Array:\n");
        for (i = 0; i < *size; i++) {
            printf("%d\t", a[i]);
        }
        printf("\n");
    }
}

void deleteAtBegin(int a[], int *size) {
    if (*size == 0) {
        printf("The array is empty\n");
        return;
    }

    int i, item = a[0];
    printf("Deleted Element is: %d\n", item);

    for (i = 0; i < *size - 1; i++) {
        a[i] = a[i + 1];
    }

    (*size)--;

    printf("Updated Array:\n");
    for (i = 0; i < *size; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void deleteAtEnd(int a[], int *size) {
	int i;
    if (*size == 0) {
        printf("The array is empty\n");
        return;
    }

    int item = a[*size - 1];
    printf("Deleted Element is: %d\n", item);

    (*size)--;

    printf("Updated Array:\n");
    for (i = 0; i < *size; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

