# A quick guide to Quick Sort

## Overview

Quicksort is a popular sorting algorithm that follows the divide-and-conquer strategy. It works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays according to whether they are less than or greater than the pivot. The sub-arrays are then recursively sorted.

### Step-by-Step Explanation

1. **Choose a Pivot:**
   - The first step is to choose a pivot element from the array. In this example, we'll choose the rightmost element as the pivot. Let's say the pivot is `5`.

2. **Partitioning:**
   - We'll partition the array around the pivot such that all elements less than or equal to the pivot come before it, and all elements greater than the pivot come after it. This is done using two pointers, `i` and `j`.

   - Initially, `i` points to the first element and `j` starts from the second element.
   - We'll move `j` to the right until we find an element greater than the pivot.
   - When we find such an element, we'll swap it with the element at index `i` and increment `i`.

   - We continue this process until `j` reaches the end of the array.

   - Finally, we swap the pivot element with the element at index `i+1`. Now, the pivot is in its sorted position.

3. **Recursion:**
   - Now, the array is divided into two partitions around the pivot. We'll recursively apply the same process to the left and right partitions until the entire array is sorted.

   - For the left partition (elements less than the pivot), we'll call Quicksort recursively with the range `[low, pi-1]`.
   - For the right partition (elements greater than the pivot), we'll call Quicksort recursively with the range `[pi+1, high]`.

4. **Base Case:**
   - The recursion stops when the range `[low, high]` contains only one element or is empty.

### Example

Let's illustrate the Quicksort algorithm with an example array: `[10, 7, 8, 9, 1, 5]`.

- Step 1: Choose pivot (rightmost element), pivot = 5.
- Step 2: Partition the array around pivot.
- Step 3: Recursively apply Quicksort to left and right partitions.

| Step | Array          | Pivot | Explanation                                      |
|------|----------------|-------|--------------------------------------------------|
|      | [10, 7, 8, 9, 1, 5] | 5     | Initial array                                    |
| 1    | [1, 7, 8, 9, 10, 5] | 5     | Partitioned around pivot 5                       |
| 2    | [1, 5, 8, 9, 10, 7] | 5     | Left partition: Quicksort([1, 5, 8, 9, 10])      |
| 3    | [1, 5, 7, 9, 10, 8] | 5     | Right partition: Quicksort([7, 9, 10, 8])        |
| 4    | [1, 5, 7, 8, 9, 10] | 5     | Final sorted array                               |

### Conclusion

Quicksort is a highly efficient sorting algorithm with an average and best-case time complexity of O(n log n) and worst-case time complexity of O(n^2). Its efficiency, simplicity, and ability to sort arrays in-place make it a popular choice for sorting large datasets.
