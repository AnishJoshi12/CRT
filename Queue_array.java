import java.util.Scanner;

public class Queue_array {
    class queue
    {
     private 
        int[] arr;
        int front;
        int rear;
        int capacity;
    public
        queue(int size) // constructor
        {   // initialization of data members
            capacity = size;
            arr = new int [capacity];
            front =0;
            rear=-1;
        }
    boolean isEmpty(){
        return rear<front;
    }

    boolean isFull(){
        return rear==capacity-1;
    }

    void enqueue(int value)
    {
        if(isFull())
        {
            System.out.println("Queue is full");
        }
        else
        {
          arr[++rear]=value;
          System.out.println(value+"inserted into queue");
        }
    }

void display()
{
    for(int i=front; i<=rear; i++)
    {
        System.out.println(arr[i]);
    }
}

int dequeue()
{
    if(isEmpty())
    {
        System.out.println("Queue is empty");
        return -1;
    }
    return arr[front++];
}

int peek()
{
    if(isEmpty())
    {
        System.out.println("Queue is empty");
        return -1;
    }
    return arr[front];
}

    }
    public static void main(String[] args)
    { Scanner sc=new Scanner(System.in);
      Queue_array qa=new Queue_array();
      queue Q=qa.new queue(5);
        System.out.println("Queue has created");
        while(true)
        {    
            int choice=sc.nextInt();
            System.out.println("1. Enqueue");
            System.out.println("2. Display queue");
            System.out.println("3. dequeue");
            System.out.println("4. Peek");
            System.out.println("5. Delete Queue");
            System.out.println("6. Exit");
            if(choice==1)
            {
                System.out.println("Enter value to enqueue");
                int value=sc.nextInt();
                Q.enqueue(value);
            }
            else
            {
                Q.display();
            }
           
        }
      
    }
}
