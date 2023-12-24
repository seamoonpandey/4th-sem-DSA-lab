public class Stack{
    private int[] arr;
    private int top;
    private int capacity;

    public Stack(int initialCapacity) {
        arr = new int[initialCapacity];
        top = -1;
        capacity = initialCapacity;
    }

    public Stack(){
        this(5);
    }

    public boolean isEmpty(){
        return top == -1;
    }

    public boolean isFull(){
        return top == capacity - 1;
    }

    public void push(int data){
        if(isFull()){
            System.out.println("Stack overflow");
            return;
        }
        arr[++top] = data;
    }

    public int pop(){
        if(isEmpty()){
            System.out.println("Stack underflow");
            throw new IllegalStateException("Stack underflow");
        }
        return arr[top--];
    }

    public int peek(){
        if(isEmpty()){
            System.out.println("Stack underflow");
            throw new IllegalStateException("Stack underflow");
        }
        return arr[top];
    }


    public static void main(String[] args)
    {
        Stack myStack = new Stack();

        myStack.push(10);
        myStack.push(20);
        myStack.push(30);
        myStack.push(40);
        myStack.push(50);

        System.out.println("Is the stack full? " + (myStack.isFull() ? "Yes" : "No"));
        System.out.println("Top element: " + myStack.peek());
        System.out.println("Popped element: " + myStack.pop());
        System.out.println("Popped element: " + myStack.pop());

        System.out.println("Is the stack full? " + (myStack.isFull() ? "Yes" : "No"));
        System.out.println("Is the stack empty? " + (myStack.isEmpty() ? "Yes" : "No"));
    }

}