# Lab Report: Stack Implementation

**Problem Statement:**

Handle Stack operations using array implementation method

**Background Theory:**

A stack is a fundamental data structure operating on the Last In, First Out (LIFO) principle. The stack's primary operations include push, which adds an element to the top, pop, which removes the top element, and peek, which allows viewing the top element without removal.

This implementation uses an array to represent the stack. The array is dynamically managed to accommodate varying numbers of elements, ensuring flexibility in the stack's size.

**Algorithm:**

**Step 1: Initialization**

- Create an array with a specified or default capacity.
- Initialize the top index to -1.

**Step 2: Push Operation**

- **Step 2.1:** Check if the stack is full.
  - If true, go to Step 2.2; otherwise, continue.
- **Step 2.2:** Resize the array.
- **Step 2.3:** Increment the top index (`top`) by 1.
- **Step 2.4:** Add the element to the array.

**Step 3: Pop Operation**

- **Step 3.1:** Check if the stack is empty.
  - If true, go to Step 3.2; otherwise, continue.
- **Step 3.2:** Report stack underflow.
- **Step 3.3:** Retrieve the top element.
- **Step 3.4:** Decrement the top index (`top`) by 1.
- **Step 3.5:** Return the retrieved element.

**Step 4: Peek Operation**

- **Step 4.1:** Check if the stack is empty.
  - If true, go to Step 4.2; otherwise, continue.
- **Step 4.2:** Report stack underflow.
- **Step 4.3:** Return the top element without removal.

**Step 5: Resize Operation**

- **Step 5.1:** Create a new array with double the current capacity.
- **Step 5.2:** Copy existing elements to the new array.
- **Step 5.3:** Free the memory of the old array.
- **Step 5.4:** Update the array reference and capacity.

**Flowchart**

![image](https://github.com/seamoonpandey/4th-sem-DSA-lab/assets/115852972/f7e4a5fa-7e92-494d-80ea-86cb0f59e7dc)

![image](https://github.com/seamoonpandey/4th-sem-DSA-lab/assets/115852972/4b5641ae-f16a-4f06-a78f-c705f21113ee)

**Sample Input:**

```C++
Push 10
Push 20
Push 30
```

**Sample Output:**

```C++
Top element: 30
Popped element: 30
Popped element: 20
Is the stack full ? No
Is the stack empty? No
```

**Images:**
![image](https://github.com/seamoonpandey/4th-sem-DSA-lab/assets/115852972/49fa5015-571e-4dae-96a9-c07ff7c0d731)

![image](https://github.com/seamoonpandey/4th-sem-DSA-lab/assets/115852972/aa0be846-1e35-47dc-8c27-3849639b6006)

**Conclusion:**

In this lab, we successfully implemented a stack, providing a versatile data structure capable of handling various scenarios. The step-by-step algorithms elucidate the intricacies of each operation, including push, pop, and peek. The resizing mechanism ensures the stack dynamically adjusts its size to accommodate elements efficiently. This implementation serves as a fundamental building block for understanding data structures and algorithms.

## Applications of Stack

### Conversion from infix expression to postfix expression

**Operators Priority Order:**

1. Highest:
   - Exponential (^ or **)
   - Multiplication (* or X)
   - Division (/)
2. Lowest:
   - Addition (+)
   - Subtraction (-)

**Algorithm Steps:**

1. Initialize an empty stack to hold operators.
2. Read each item from the input infix expression.
   - If the item is an operand, append it to the postfix string.
   - If the item is "(", push it onto the stack.
   - If the item is an operator:
     - If the stack is empty or the operator has higher precedence than the one on top of the stack, push it onto the stack.
     - If the operator has lower precedence than the one on top of the stack, pop the operator from the stack and append it to the postfix string. Then, push the current operator onto the stack.
   - If the item is ")", pop operators from the stack and append them to the postfix string until a "(" is encountered on the stack (remove "(").
3. If the end of the infix expression is reached, pop any remaining operators from the stack and append them to the postfix string.

### Example

Input Infix Expression: A + (B *C - (D / E ^ F)* G) * H

Output Postfix Expression: ABC*DEF^/G*-H*
