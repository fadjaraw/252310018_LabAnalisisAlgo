#include<iostream>
using namespace std;

const int MAX = 5;
class Stack 
{
    private:
        int top;
        int stack[MAX];
        int items;

    public:
        Stack() 
        {
            top = -1;
            items = 0;
        }
        int pop () 
        {
            if (!items) 
            {
                cout << "Stack kosong!" << endl;
                return -1;
            }
            int value = stack[top];
            top--;
            items--;
            return value;
        }

        void insert (int data) 
        {
            top++;
            stack[top] = data;
            items++;
        }

        void printStack() 
        {
            for (int i = top; i >= 0; i--) 
            {
                cout << stack[i] << " ";
            }
            cout << endl;
        }
};

int main() 
{
    Stack* stack = new Stack();
    stack->insert(621);
    stack->insert(999);
    stack->insert(201);
    stack->insert(94);
    stack->insert(124);
    stack->printStack();
    
    return 0;
}