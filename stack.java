import java.util.*;
// Java program to demonstrate working of stack using array.
public class Stack { 
    class stack
    {  
        int top;  
        int maxsize;  
        int[] stackarray;  
        // constructor to initialize the stack  
        public stack(int size)  
        {  
            this.maxsize = size;  
            this.stackarray = new int[this.maxsize];  
            this.top = -1;  
        }  
        // function to add an item to stack  
        public void push(int j)  
        {  
            if (!isFull()) {  
                top++;  
                stackarray[top] = j;  
            } else {  
                System.out.println("Stack is full");  
            }  
        }  
        // function to remove an item from stack 
        public int pop()  
        {  
            if (!isEmpty()) {  
                int old_top = top;  
                top--;  
                return stackarray[old_top];  
            } else {  
                System.out.println("Stack is empty"); 
                return -1; 
            } 
        } 
        // function to display stack items 
        public void display()
        {  
            System.out.println("Stack: ");  
            for (int i = top; i >= 0; i--) {  
                System.out.println(stackarray[i]);  
            }  
        }
        // function to check if the stack is empty 
        public boolean isEmpty() 
        { 
            return (top == -1); 
        } 
        // function to check if the stack is full 
        public boolean isFull() 
        { 
            return (top == maxsize - 1);
        }
    }
    public static void main(String[] args) {
     stack mystack = new CRT_DSA().new stack(5);  
        int choice = 0;
        Scanner sc = new Scanner(System.in);
        while (choice != 4) {  
            System.out.println("1. Push");  
            System.out.println("2. Pop");  
            System.out.println("3. Display");  
            System.out.println("4. Exit");  
            System.out.print("Enter your choice: ");  
            choice = sc.nextInt();  
            switch (choice) {  
                case 1:  
                    System.out.print("Enter value to push: ");  
                    int value = sc.nextInt();  
                    mystack.push(value);  
                    break;  
                case 2:  
                    int poppedValue = mystack.pop();  
                    if (poppedValue != -1) { 
                        System.out.println("Popped value: " + poppedValue); 
                    } 
                    break;  
                case 3:
                    mystack.display();
                    break;
                case 4:
                    System.out.println("Exiting...");
                    break;    
        
    }
}
}
}


