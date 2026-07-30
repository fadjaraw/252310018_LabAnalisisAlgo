#include <iostream>
using namespace std;

struct Node 
{
	int data;
	Node *prev;
	Node *next;
};

Node *head = NULL;
Node *tail = NULL;

void tambahNode(int nilai) 
{
	Node *baru = new Node;
	baru->data = nilai;
	baru->next = NULL;
	baru->prev = NULL;
	if (head == NULL) 
	{
		head = tail = baru;
	}
	else
	{
		tail->next = baru;
		baru->prev = tail;
		tail = baru;
	}
}

void tampilMaju() 
{
	Node *bantu = head;
	cout << "Traversal dari Head ke Tail:\n";
	
	while (bantu != NULL) 
	{
		cout << bantu->data;
		if (bantu->next != NULL)
		cout << " <-> ";
		bantu = bantu->next;
	}
	
	cout << endl;
	cout << endl;
}

void tampilMundur() 
{
	Node *bantu = tail;
	cout << "Traversal dari Tail ke Head:\n";
	while (bantu != NULL) 
	{
		cout << bantu->data;
		if (bantu->prev != NULL)
		cout << " <-> ";
		bantu = bantu->prev;
	}
	
	cout << endl;
}

int main()
{
	tambahNode(24);
	tambahNode(10);
	tambahNode(33);
	tambahNode(33);
	
	tampilMaju();
	tampilMundur();
	
	return 0;
}
