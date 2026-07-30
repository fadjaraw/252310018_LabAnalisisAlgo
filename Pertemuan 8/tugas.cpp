#include <iostream>
using namespace std;

const int MAX = 5;
class Queue 
{
    private:
        string data[MAX];
        int front;
        int rear;
    
    public:
        Queue() 
        {
            front = -1;
            rear = -1;
        }

        bool isEmpty() 
        {
            return front == -1;
        }

        bool isFull() 
        {
            return rear == MAX - 1;
        }

        void enqueue(string nama) 
        {
            if (isFull()) 
            {
                cout << "Antrean penuh!" << endl;
                return;
            }
            if (isEmpty()) 
            {
                front = 0;
            }
            rear++;
            data[rear] = nama;
        }
        
        void dequeue() 
        {
            if (isEmpty()) 
            {
                cout << "Antrean kosong!" << endl;
                return;
            }

            cout << "Melayani: " << data[front] << endl;
            if (front == rear) 
            {
                front = rear = -1;
            } 
            else 
            {
                front++;
            }
        }

        void peek() 
        {
            if (isEmpty()) 
            {
                cout << "Antrean kosong!" << endl;
            } 
            else
            {
                cout << "Antrean terdepan: " << data[front] << endl;
            }
        }
            
        int size() 
        {
            if (isEmpty())
            return 0;
            return rear - front + 1;
        }

        void display() 
        {
            if (isEmpty()) 
            {
                cout << "Antrean kosong!" << endl;
                return;
            }
            
            cout << "Daftar antrean: ";

            for (int i = front; i <= rear; i++) 
            {
                cout << data[i] << " ";
            }

            cout << endl;
        }
};

int main() 
{
    Queue q;
    //Enqueue
    q.enqueue("Jarz");
	q.enqueue("Iki");
    q.enqueue("Denis");

    //Display
    q.display();
    
    //Peek
    q.peek();

    //Size
    cout << "Jumlah antrean: " << q.size() << endl;

    //IsEmpty
    cout << "IsEmpty: "
    << (q.isEmpty() ? "Ya" : "Tidak") << endl;

    //IsFull
    cout << "IsFull: "
    << (q.isFull() ? "Ya" : "Tidak") << endl;

    //Dequeue
    q.dequeue();

    //Display sesudah dequeue
    q.display();
    
    return 0;
}
