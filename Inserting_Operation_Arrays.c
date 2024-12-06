#include <stdio.h>
void insertAtBegin(int a[], int *size);
void insertAtPos(int a[], int *size);
void insertAtEnd(int a[], int *size);

int main() {
    int a[50], i, size, n, k = 1;

    printf("Enter the size of the array\n");
    scanf("%d", &size);

    if (size > 50) {
        printf("Maximum size is 50.\n");
        return 1;
    }

    printf("Enter the elements in the array\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    printf("Initial array:\n");
    for (i = 0; i < size; i++) {
        printf("%d\t", a[i]);
    }

    while (k) {
        printf("\nEnter\n 1 for insert at beginning\n 2 for positional insert\n 3 for insert at end\n");
        printf("Press 0 for exit\n");
        scanf("%d", &n);
        switch (n) {
            case 1:
                insertAtBegin(a, &size);
                break;
            case 2:
                insertAtPos(a, &size);
                break;
            case 3:
                insertAtEnd(a, &size);
                break;
            case 0:
                k = 0;
                printf("Exiting the program\n");
                break;
            default:
                printf("Invalid option\n");
        }
    }

    return 0;
}

void insertAtBegin(int a[], int *size) {
    if (*size >= 50) {
        printf("Array is full. Cannot insert.\n");
        return;
    }

    int number, i;
    printf("Enter the number that you want to insert\n");
    scanf("%d", &number);

    for (i = *size; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = number;
    (*size)++;

    printf("Array after insertion at beginning:\n");
    for (i = 0; i < *size; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void insertAtPos(int a[], int *size) {
    if (*size >= 50) {
        printf("Array is full. Cannot insert.\n");
        return;
    }

    int pos, number, i;
    printf("Enter the position (1-based) where you want to insert the element\n");
    scanf("%d", &pos);
    printf("Enter the number that you want to insert\n");
    scanf("%d", &number);

    if (pos < 1 || pos > *size + 1) {
        printf("Invalid position\n");
        return;
    }

    for (i = *size; i >= pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos - 1] = number;
    (*size)++;

    printf("Array after insertion at position %d:\n", pos);
    for (i = 0; i < *size; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void insertAtEnd(int a[], int *size) {
	int i;
    if (*size >= 50) {
        printf("Array is full. Cannot insert.\n");
        return;
    }

    int number;
    printf("Enter the number that you want to insert\n");
    scanf("%d", &number);

    a[*size] = number;
    (*size)++;

    printf("Array after insertion at end:\n");
    for (i = 0; i < *size; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

