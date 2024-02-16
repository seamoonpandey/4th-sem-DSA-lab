# Lab Report: Sorting Algorithms Implementation

**Problem Statement:**

Implement sorting algorithms including insertion sort, bubble sort, and selection sort.

**Background Theory:**

Sorting algorithms are fundamental in computer science, enabling the arrangement of elements in a specified order. Three common sorting algorithms are insertion sort, bubble sort, and selection sort.

- **Insertion Sort:** This algorithm iteratively builds a sorted portion of the array by inserting elements one at a time into their correct positions.

- **Bubble Sort:** Bubble sort repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.

- **Selection Sort:** Selection sort divides the array into a sorted and an unsorted region. It repeatedly selects the minimum element from the unsorted region and swaps it with the first element of the unsorted region.

**Applications of Sorting Algorithms:**

Sorting algorithms are ubiquitous in computer science and find applications in various domains, including:

- Database systems for sorting records.
- Search algorithms like binary search, which require sorted data.
- Computational biology for genome sequencing.
- Data compression techniques that leverage sorted data for better compression ratios.

Sorting algorithms play a pivotal role in optimizing data processing and retrieval, making them indispensable in computer science and related fields.

**Algorithm:**

**Insertion Sort:**

1. **Step 1:** Iterate through the array from the second element to the last.
2. **Step 2:** For each element, compare it with the elements to its left and insert it into the correct position in the sorted subarray.

**Bubble Sort:**

1. **Step 1:** Iterate through the array from the first element to the second-to-last.
2. **Step 2:** For each iteration, compare adjacent elements and swap them if they are in the wrong order. Repeat until the array is sorted.

**Selection Sort:**

1. **Step 1:** Iterate through the array from the first element to the second-to-last.
2. **Step 2:** For each iteration, find the index of the minimum element in the unsorted region.
3. **Step 3:** Swap the minimum element with the first element of the unsorted region.

### Flowchart

#### Insertion Sort

![Insertion Sort Flowchart](https://github.com/seamoonpandey/4th-sem-DSA-lab/assets/insertion_sort_flowchart.png)

#### Bubble Sort

![Bubble Sort Flowchart](https://github.com/seamoonpandey/4th-sem-DSA-lab/assets/bubble_sort_flowchart.png)

#### Selection Sort

![Selection Sort Flowchart](https://github.com/seamoonpandey/4th-sem-DSA-lab/assets/selection_sort_flowchart.png)

**Sample Input:**

Array: `[5, 3, 8, 4, 2]`

**Sample Output:**

**Insertion Sort:**
Sorted Array: `[2, 3, 4, 5, 8]`

**Bubble Sort:**
Sorted Array: `[2, 3, 4, 5, 8]`

**Selection Sort:**
Sorted Array: `[2, 3, 4, 5, 8]`

**Conclusion:**

In this lab, we successfully implemented three sorting algorithms: insertion sort, bubble sort, and selection sort. Each algorithm offers a different approach to sorting elements, with varying time and space complexities. Understanding these algorithms is crucial for developing efficient sorting mechanisms in various applications.
