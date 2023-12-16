#include <iostream>

class DynamicArray {
private:
    int* array;
    int size;

public:
    DynamicArray(int initialSize) {
        size = initialSize;
        array = new int[size];
    }

    ~DynamicArray() {
        delete[] array;
    }

    void fillArray() {
        std::cout << "Fill the array (with spaces between the elements): ";
        for (int i = 0; i < size; i++) {
            std::cin >> array[i];
        }
    }

    void displayArray() {
        for (int i = 0; i < size; i++) {
            std::cout << array[i] << "\t";
        }
        std::cout << std::endl;
    }

    void insertElement(int index, int value) {
        if (index < 0 || index > size) {
            std::cout << "Invalid index for insertion" << std::endl;
            return;
        }

        int* newArray = new int[size + 1];

        for (int i = 0; i < index; i++) {
            newArray[i] = array[i];
        }

        newArray[index] = value;

        for (int i = index; i < size; i++) {
            newArray[i + 1] = array[i];
        }

        delete[] array;
        array = newArray;
        size++;
    }

    void deleteElement(int index) {
        if (index < 0 || index >= size || size <= 0) {
            std::cout << "Invalid index for deletion" << std::endl;
            return;
        }

        int* newArray = new int[size - 1];

        for (int i = 0; i < index; i++) {
            newArray[i] = array[i];
        }

        for (int i = index + 1; i < size; i++) {
            newArray[i - 1] = array[i];
        }

        delete[] array;
        array = newArray;
        size--;
    }
};

int main() {
    int initialSize;
    std::cout << "Enter the size of the array: ";
    std::cin >> initialSize;

    DynamicArray dynamicArray(initialSize);

    dynamicArray.fillArray();
    std::cout << "Initial array: ";
    dynamicArray.displayArray();

    int insertIndex, insertValue;
    std::cout << "Enter the index you want to insert in the array: ";
    std::cin >> insertIndex;
    std::cout << "Enter the value you want to insert in the array: ";
    std::cin >> insertValue;
    dynamicArray.insertElement(insertIndex, insertValue);
    std::cout << "After inserting " << insertValue << " at index " << insertIndex << ": ";
    dynamicArray.displayArray();

    int deleteIndex;
    std::cout << "Enter the index you want to delete from the array: ";
    std::cin >> deleteIndex;
    dynamicArray.deleteElement(deleteIndex);
    std::cout << "After deleting an element at index " << deleteIndex << ": ";
    dynamicArray.displayArray();

    return 0;
}
