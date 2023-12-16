import java.util.Scanner;

public class DynamicArray {
    private int[] array;
    private int size;

    public DynamicArray(int initialSize) {
        size = initialSize;
        array = new int[size];
    }

    public void fillArray() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Fill the array (with spaces between the elements): ");
        for (int i = 0; i < size; i++) {
            if (scanner.hasNextInt()) {
                array[i] = scanner.nextInt();
            } else {
                System.err.println("Invalid input. Exiting.");
                System.exit(1);
            }
        }
    }

    public void displayArray() {
        for (int i = 0; i < size; i++) {
            System.out.print(array[i] + "\t");
        }
        System.out.println();
    }

    public void insertElement(int index, int value) {
        if (index < 0 || index > size) {
            System.err.println("Invalid index for insertion");
            return;
        }

        int[] newArray = new int[size + 1];

        for (int i = 0; i < index; i++) {
            newArray[i] = array[i];
        }

        newArray[index] = value;

        for (int i = index; i < size; i++) {
            newArray[i + 1] = array[i];
        }

        array = newArray;
        size++;
    }

    public void deleteElement(int index) {
        if (index < 0 || index >= size || size <= 0) {
            System.err.println("Invalid index for deletion");
            return;
        }

        int[] newArray = new int[size - 1];

        for (int i = 0; i < index; i++) {
            newArray[i] = array[i];
        }

        for (int i = index + 1; i < size; i++) {
            newArray[i - 1] = array[i];
        }

        array = newArray;
        size--;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");

        if (scanner.hasNextInt()) {
            int initialSize = scanner.nextInt();

            if (initialSize <= 0) {
                System.err.println("Invalid array size. Exiting.");
                System.exit(1);
            }

            DynamicArray dynamicArray = new DynamicArray(initialSize);

            dynamicArray.fillArray();
            System.out.print("Initial array: ");
            dynamicArray.displayArray();

            System.out.print("Enter the index you want to insert in the array: ");
            int insertIndex = scanner.nextInt();

            System.out.print("Enter the value you want to insert in the array: ");
            int insertValue = scanner.nextInt();

            dynamicArray.insertElement(insertIndex, insertValue);
            System.out.println("After inserting " + insertValue + " at index " + insertIndex + ": ");
            dynamicArray.displayArray();

            System.out.print("Enter the index you want to delete from the array: ");
            int deleteIndex = scanner.nextInt();

            dynamicArray.deleteElement(deleteIndex);
            System.out.println("After deleting an element at index " + deleteIndex + ": ");
            dynamicArray.displayArray();
        } else {
            System.err.println("Invalid input. Exiting.");
        }
    }
}
