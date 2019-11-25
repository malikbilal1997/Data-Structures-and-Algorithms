#include <iostream>
#define SIZE 10
using namespace std;
//Queue Class
class Queue {
private:
    int arr[SIZE], front, rear;
public:
    Queue() {
        rear = front = -1;
    }
    //is_empty Method
    bool is_empty() {
        return (front == -1 && rear == -1);
    }
    //is_full Method
    bool is_full() {
        return (((rear+1)%SIZE) == front);
    }
    //enqueue Method
    void enqueue(int x) {
        if(is_full()) {
            cout << "Queue is Full." << endl;
        }
        else {
            if(is_empty()) {
                rear = front = 0;
                arr[rear] = x;
            }
            else {
                rear = (rear+1)%SIZE;
                arr[rear] = x;
            }
        }
    }
    //dequeue Method
    void dequeue() {
        if(is_empty()) {
            cout << "Queue is Empty." << endl;
        }
        else if(front == rear) {
            rear = front  = -1;
        }
        else {
            front = (front+1)%SIZE;
        }
    }
    //peek Method
    int peek() {
        if(is_empty()) {
            cout << "Queue is Empty." << endl;
        }
        else {
            return arr[front];
        }
    }
    
};
//Main Method
int main() {
    Queue q;
    //Todo
}