#include <iostream>
#define SIZE 30
using namespace std;
//Stack Class
class Stack {
private:
    int arr[SIZE], top;
public:
    Stack() { 
        top = -1; 
    }
    // push Method
    void push(int x) {
        if(is_full()) 
            cout << "Stack overflow." << endl;
        else { 
            top++; arr[top] = x; 
        }
    }
    //is_full Method
    bool is_full() 
        return (top >= SIZE);
    // is_empty Method
    bool is_empty()  
        return (top == -1)
    // pop Method
    void pop() {
        if(is_empty()) 
            cout << "Stack underflow." << endl;
        else 
            top--;
    }
    // peek Method
    int peek() {
        if(is_empty()) 
            cout << "Stack underflow." << endl;
        else 
            return arr[top];
    }
};
//Main Method
int main() {
    Stack s;
    //Todo
}