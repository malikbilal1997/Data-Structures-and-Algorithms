#include <iostream>

#define ARRAY_SIZE 10

// Circular Queue Class implemented using C array
class Queue
{
private:
    int array[ARRAY_SIZE], front, rear;
public:
    Queue()
    {
        rear = front = -1;
    }
    // Return true if Queue is empty else false
    bool empty()
    {
        return (front == -1 && rear == -1);
    }
    // Return true if Queue is full else false
    bool full() {
        return (((rear+1)%ARRAY_SIZE) == front);
    }
    // Push a value at the end of Queue(Array)
    void enqueue(int x)
    {
        // Checikng if Queue has space
        if(full())
        {
            std::cout << "Queue is Full." << '\n';
        }
        else {
            if(empty())
            {
                rear = front = 0;
                array[rear] = x;
            }
            else
            {
                rear = (rear+1)%ARRAY_SIZE;
                array[rear] = x;
            }
        }
    }
    // Pop a value from the start of Queue(Array)
    void dequeue()
    {
        // Checking if Queue is empty
        if(empty())
        {
            std::cout << "Queue is Empty." << '\n';
        }
        else if(front == rear)
        {
            rear = front  = -1;
        }
        else
        {
            front = (front+1)%ARRAY_SIZE;
        }
    }
    // Return first value of Queue(Array)
    int peek() 
    {
        return array[front];        
    }
    
};
//Main Method
int main() {
    // Declaring Queue object
    Queue q;

    // Performing operations on Queue
    q.enqueue(10);
    q.enqueue(12);
    std::cout << q.peek() << '\n';
}