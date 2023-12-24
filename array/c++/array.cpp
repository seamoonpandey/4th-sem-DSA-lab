#include <iostream>
#include <cstdlib> 
using namespace std;

class DynamicArray {
private:
    int* array;
    int size;

public:
    DynamicArray(int initialSize) : size(initialSize), array(new int[initialSize]) {}

    ~DynamicArray() {
        delete[] array;
    }

    void fillArray() {
        cout << "Fill the array (with spaces between the elements): ";
        for (int i = 0; i < size; i++) {
            cin >> array[i];
            if (cin.fail()) {
                cerr << "Invalid input. Exiting." << endl;
                exit(EXIT_FAILURE);
            }
        }
    }

    void displayArray() const {
        for (int i = 0; i < size; i++) {
            cout << array[i] << "\t";
        }
        cout << endl;
    }

    void insertElement(int index, int value) {
        if (index < 0 || index > size) {
            cerr << "Invalid index for insertion" << endl;
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
            cerr << "Invalid index for deletion" << endl;
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
    cout << "Enter the size of the array: ";
    cin >> initialSize;

    if (cin.fail() || initialSize <= 0) {
        cerr << "Invalid array size. Exiting." << endl;
        return EXIT_FAILURE;
    }

    DynamicArray dynamicArray(initialSize);

    dynamicArray.fillArray();
    cout << "Initial array: ";
    dynamicArray.displayArray();

    int insertIndex, insertValue;
    cout << "Enter the index you want to insert in the array: ";
    cin >> insertIndex;

    if (cin.fail()) {
        cerr << "Invalid input. Exiting." << endl;
        return EXIT_FAILURE;
    }

    cout << "Enter the value you want to insert in the array: ";
    cin >> insertValue;

    if (cin.fail()) {
        cerr << "Invalid input. Exiting." << endl;
        return EXIT_FAILURE;
    }

    dynamicArray.insertElement(insertIndex, insertValue);
    cout << "After inserting " << insertValue << " at index " << insertIndex << ": ";
    dynamicArray.displayArray();

    int deleteIndex;
    cout << "Enter the index you want to delete from the array: ";
    cin >> deleteIndex;

    if (cin.fail()) {
        cerr << "Invalid input. Exiting." << endl;
        return EXIT_FAILURE;
    }

    dynamicArray.deleteElement(deleteIndex);
    cout << "After deleting an element at index " << deleteIndex << ": ";
    dynamicArray.displayArray();

    return 0;
}
