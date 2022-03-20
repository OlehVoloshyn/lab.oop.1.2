#include "OneLinkedList.h"
#include<vector>
#include <iostream>
#include <string>
using namespace std;

void OneLinkedList::SetHead(Node* v)
{
	head = v;
}

void OneLinkedList::addNode(int d)
{
	Node* nd = new Node;
	nd->data = d;
	nd->next = NULL;
	if (head == NULL)
		head = nd;
	else
	{
		Node* current = head;
		while (current->next != NULL)
			current = current->next;
		current->next = nd;
	}
}

void OneLinkedList::printList()
{
	Node* current = head;
	while (current!=NULL)
	{
		cout << current->data << endl;
		current = current->next;
	}
}


void OneLinkedList::deleteNode(Node* n)
{
	if (n == NULL) return;
	
	Node* k = head;
	if (head == n)
	{
		head = n->next;
		delete n;
		return;
	}
	while (k->next != n)
		k = k->next;
	k->next = n->next;
	delete n;
}

Node* OneLinkedList::find(int d)
{
	Node* current = head;

	while (current) {
		if (current->data == d) return current;
		current = current->next;
	}
	return NULL;
}

void OneLinkedList::sortUpNode()
{
	if (head == NULL) return;
	Node* v = head;
	Node* w = v->next;
	int p;

	while (v->next != NULL)
	{
		while (w != NULL)
		{
			if (v->data > w->data)
			{
				p = v->data;
				v->data = w->data;
				w->data = p;
			}
			w = w->next;
		}
		v = v->next;
		w = v->next;
	}
}

void OneLinkedList::Read()
{
	int d;
	char s;
	bool t = true;
	

	while (t)
	{

	cout << "Enter the natural numbers?       y/n" << endl;
	cin >> s;
	cout << endl;

	
		if (s == 'y')
		{
			cout << "number ="; cin >> d;

			addNode(d);
		}
		else break;
	}
}

void OneLinkedList::Display()
{
	if (Init(head))
	{
		printList();
		cout << "____________________________" << endl;
	}
}

bool OneLinkedList::Init(Node* head)
{
	if (head == NULL)
		return false;
	else return true;
}


