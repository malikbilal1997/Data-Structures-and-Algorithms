    #include <iostream>

// Defines the size of Array
#define ARRAY_SIZE 10

// Class Stack implemented using C array
class Stack
{
private:
    int array[ARRAY_SIZE], top;
public:
    Stack()
    { 
        top = -1; 
    }
    // Push a value on top of Stack(Array)
    void push(int value)
    {
        // Checking if Stack is full
        if(full())
        {
            std::cout << "Stack is Full." << '\n';
        }
        else
        { 
            top++;
            array[top] = value; 
        }
    }
    // Return true if stack is full else false
    bool full()
    {
        return (top >= ARRAY_SIZE);
    }
    // Return true if Stack is empty else false
    bool empty()
    {
        return (top == -1);
    }
    // Remove a value from top of Stack(Array)
    void pop()
    {
        // Checking if Stack is empty
        if(empty())
        {
            std::cout << "Stack underflow." << '\n';
        } 
        else
        {
            top--;
        }
    }
    // Return top value of Stack(Array)
    int peek()
    { 
        return array[top];
    }
};

int main()
{
    // Declare Stack object
    Stack s;
    // Perform operations
    s.push(10);
    s.push(20);
    s.push(30);
    std::cout << s.peek();
}