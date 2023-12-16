#include <stdio.h>

int size;

void fillArray(int array[]);
void displayArray(int array[]);
void insertElement(int array[], int index, int value);
void deleteElement(int array[], int index);

int main() {
    printf("Enter the size of the array: ");
    scanf("%i", &size);

    int array[size];

    fillArray(array);
    printf("Initial array: ");
    displayArray(array);

    int insertIndex, insertValue;
    printf("Enter the index you want to insert in the array.\t");
    scanf("%d",&insertIndex);
    printf("Enter the value you want to insert in the array.\t");
    scanf("%d",&insertValue);
    insertElement(array, insertIndex, insertValue);
    printf("After inserting an %d at index %d: ",insertValue,insertIndex);
    displayArray(array);

    int deleteIndex;
    printf("Enter the index you want to delete from the array.\t");
    scanf("%d",&deleteIndex);
    deleteElement(array, deleteIndex);
    printf("After deleting an element at index %d: ",deleteIndex);
    displayArray(array);

    return 0;
}

void fillArray(int array[]) {
    printf("Fill the array (with spaces between the elements): ");
    for (int i = 0; i < size; i++) {
        scanf("%i", &array[i]);
    }
}

void displayArray(int array[]) {
    for (int i = 0; i < size; i++) {
        printf("%i\t", array[i]);
    }
    printf("\n");
}

void insertElement(int array[], int index, int value) {
    if (index < 0 || index > size) {
        puts("Invalid index for insertion");
        return;
    }

    for (int i = size - 1; i >= index; i--) {
        array[i + 1] = array[i];
    }

    array[index] = value;

    size++;
}

void deleteElement(int array[], int index) {
    if (index < 0 || index >= size || size <= 0) {
        puts("Invalid index for deletion");
        return;
    }

    for (int i = index; i < size - 1; i++) {
        array[i] = array[i + 1];
    }

    size--;
}
