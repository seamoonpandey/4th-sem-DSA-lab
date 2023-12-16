
# Lab Report: Array Insertion and Deletion

## Objective

This lab report instigates the fundamental operations related to array manipulation: insertion and deletion. The study emphasizes a generic approach to array management, applicable across various programming paradigms.

## 1. Introduction

Array manipulation is foundational in computer science and programming. Understanding how to efficiently insert and delete elements within an array is crucial for optimizing algorithms and data structures.

## 2. Theory

### 2.1 Array Insertion and Deletion

In this lab, the focus is on a static array structure. Key operations include:

- **Insertion**: Placing a new element at a specified position within the array.
- **Deletion**: Removing an existing element from a specified position within the array.

### 2.2 Algorithm

#### 2.2.1 Insertion Algorithm

The generic algorithm for array insertion is outlined as follows:

```bash
// Pseudocode for array insertion
procedure insertElement(array, index, value):
    if index < 0 or index >= array.length:
        print "Invalid index for insertion"
        return

    // Shift elements to make space for the new element
    for i from array.length - 1 down to index + 1:
        array[i] = array[i - 1]

    // Insert the new element
    array[index] = value
```

Algorithm: InsertElement(array, index, value)
Input: array - the array to insert into
       index - the position to insert the new element
       value - the new element to insert

1. If index < 0 or index >= length of array, then
   1.1 Print "Invalid index for insertion"
   1.2 Return

2. Shift elements to make space for the new element
   2.1 For i from length of array - 1 down to index + 1, do
       2.1.1 array[i] = array[i - 1]

3. Insert the new element at the specified index
   3.1 array[index] = value

#### 2.2.2 Deletion Algorithm

The generic algorithm for array deletion is outlined as follows:

```bash
// Pseudocode for array deletion
procedure deleteElement(array, index):
    if index < 0 or index >= array.length:
        print "Invalid index for deletion"
        return

    // Shift elements to fill the gap left by the deleted element
    for i from index to array.length - 2:
        array[i] = array[i + 1]
```

Algorithm: DeleteElement(array, index)
Input: array - the array to delete from
       index - the position of the element to delete

1. If index < 0 or index >= length of array, then
   1.1 Print "Invalid index for deletion"
   1.2 Return

2. Shift elements to fill the gap left by the deleted element
   2.1 For i from index to length of array - 2, do
       2.1.1 array[i] = array[i + 1]

## 3. Implementation

The implementation details will depend on the programming language or context in which the array manipulation operations are carried out. The essence is to adhere to the outlined algorithms for insertion and deletion.

## 4. Results

Practical testing of array insertion and deletion operations was conducted, ensuring the correct functioning of the algorithms and handling of invalid scenarios.

## 5. Conclusion

This lab provided insights into the fundamental operations of array insertion and deletion. The generic algorithms presented serve as a foundation for understanding and implementing these operations across different programming languages and applications.
