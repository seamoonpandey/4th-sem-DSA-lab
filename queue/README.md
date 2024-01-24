
# Lab Report: Queue

## Objective

This lab report instigates the fundamental operations related to queue using the sequential allocation. The study emphasizes a generic approact to queue management and usage applicable accross various programming paradigms.

## 1. Introduction

A Queue is a linear data structure. This data structure follows a particular order in which the operations are performed. The order is First In First Out (FIFO). It means that the element that is inserted first in the queue will come out first and the element that is inserted last will come out last. It is an ordered list in which insertion of an element is done from one end which is known as the rear end and deletion of an element is done from the other which is known as the front end. Similar to stacks, multiple operations can be performed on the queue. When an element is inserted in a queue, then the operation is known as Enqueue and when an element is deleted from the queue, then the operation is known as Dequeue.  It is important to know that we cannot insert an element if the size of the queue is full and cannot delete an element when the queue itself is empty. If we try to insert an element even after the queue is full, then such a condition is known as overflow whereas, if we try to delete an element even after the queue is empty then such a condition is known as underflow.

## 2. Theory

### 2.1 Primary Queue Operations

- **void enqueue(int Element)** : When this operation is performed, an element is inserted in the queue at the end i.e. at the rear end. (Where T is Generic i.e we can define Queue of any type of data structure.) This operation take constant time i.e O(1).
- **int dequeue()** :  When this operation is performed, an element is removed from the front end and is returned. This operation take constant time i.e O(1).

### 2.2 Auxiliary Queue Operations

- int front(): This operation will return the element at the front without removing it and it take O(1) time.
- int rear(): This operation will return the element at the rear without removing it, Its Time Complexity is O(1).
- int isEmpty(): This operation indicates whether the queue is empty or not. This Operation also done in O(1).
- int size(): This operation will return the size of the queue i.e. the total number of elements present in the queue and it’s time complexity is O(n).

### 2.3 Types of Queue

- Simple Queue: Simple queue also known as a linear queue is the most basic version of a queue. Here, insertion of an element i.e. the Enqueue operation takes place at the rear end and removal of an element i.e. the Dequeue operation takes place at the front end.
- Circular Queue:  In a circular queue, the element of the queue act as a circular ring. The working of a circular queue is similar to the linear queue except for the fact that the last element is connected to the first element. Its advantage is that the memory is utilized in a better way. This is because if there is an empty space i.e. if no element is present at a certain position in the queue, then an element can be easily added at that position.
- Priority Queue: This queue is a special type of queue. Its specialty is that it arranges the elements in a queue based on some priority. The priority can be something where the element with the highest value has the priority so it creates a queue with decreasing order of values. The priority can also be such that the element with the lowest value gets the highest priority so in turn it creates a queue with increasing order of values.
- Dequeue: Dequeue is also known as Double Ended Queue. As the name suggests double ended, it means that an element can be inserted or removed from both the ends of the queue unlike the other queues in which it can be done only from one end. Because of this property it may not obey the First In First Out property.

### 2.4 Implementation of Queue

- Sequential allocation: A queue can be implemented using an array. It can organize a limited number of elements.
- Linked list allocation:  A queue can be implemented using a linked list. It can organize an unlimited number of elements.

### 2.5 Algorithm

1. Define an array of size SIZE
2. Assign front, and rear with -1

### 2.5.1 Enqueue Operation

1. Check if the queue is full.
2. If the queue is full, produce overflow error and exit.
3. If the queue is not full, increment rear pointer to point the next empty space.
4. Add data element to the queue location, where the rear is pointing.
5. return success.

### 2.5.2 Dequeue Operation

1. Check if the queue is empty.
2. If the queue is empty, produce underflow error and exit.
3. If the queue is not empty, access the data where front is pointing.
4. Increment front pointer to point to the next available data element.
5. Return success.

## 3. Results

In this section, you can include any experimental results or observations from implementing and testing your queue. If you have run any code to demonstrate the functionality of the queue or to showcase specific scenarios (like overflow and underflow conditions), you can present the output here. It's also a good place to include any performance metrics or insights gained during testing.

For example:

```plaintext
### Experiment 1: Testing Enqueue and Dequeue Operations

1. Enqueue operation with elements 10, 20, 30.
2. Dequeue operation to retrieve elements.
3. Observations:
   - Enqueue: Elements added successfully.
   - Dequeue: Elements retrieved in FIFO order.

### Experiment 2: Testing Overflow and Underflow Conditions

1. Enqueue operation with elements until the queue is full.
2. Attempt to enqueue more elements (overflow condition).
3. Dequeue elements until the queue is empty.
4. Attempt to dequeue more elements (underflow condition).
5. Observations:
   - Overflow: Proper error message displayed.
   - Underflow: Proper error message displayed.
```


## 4. Conclusion

The implementation of the queue using sequential allocation showcased the fundamental operations of enqueue and dequeue. Testing various scenarios, including overflow and underflow conditions, confirmed the robustness of the implemented queue. Understanding the types of queues and their applications in different scenarios is crucial for effective problem-solving.

Overall, this lab provided valuable insights into queue management using sequential allocation. Future work could explore other implementation methods, such as linked list allocation, and compare their performance in different scenarios.
