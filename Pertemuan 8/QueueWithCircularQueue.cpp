#include <iostream>
using namespace std;

const int MAX = 100;

class Queue
{
    private:
    int front, rear, count;
    int arr[MAX];

    public:
    Queue() 
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int data)
    {
        if((rear + 1) % MAX == front) {
            cout << "Queue is full!" << endl;
            return;
        }
        if(front == -1) 
        {
            front = 0;
        }
        rear = (rear + 1) % MAX;
        arr[rear] = data;
    }

    void dequeue() 
    {
        if(front == -1) {
            cout << "Antrian kosong!" << endl;
            return;
        }

        if(front == rear) 
        {
            front = -1;
            rear = -1;
        } 

        else 
        {
            front = (front + 1) % MAX;
        }
    }

    int front_element() 
    {
        if(front == -1) 
        {
            cout << "Antrian kosong!" << endl;
            return -1;
        }
        return arr[front];
    }

    bool isEmpty() 
    {
        return front == -1;
    }

};

int main() 
{
    Queue q;
    q.enqueue(3);
    q.enqueue(1);
    q.enqueue(4);

    cout << "Front element: " << q.front_element() << endl;

    q.dequeue();
    cout << "Front element after dequeue: " << q.front_element() << endl;
    q.dequeue();
    
    return 0;
}