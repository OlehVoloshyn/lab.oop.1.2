#pragma once
#include <cstddef>
#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};

class OneLinkedList
{
private:
    Node* head;
public:
    OneLinkedList()
    {
        head = NULL;
    }
    void SetHead(Node* v);
    Node* GetHead() const { return head; }
    void addNode(int d);
    void printList();
    void deleteNode(Node* n);
    Node* find(int d);
    void sortUpNode();
    void Read();
    void Display();
    bool Init(Node* head);


};