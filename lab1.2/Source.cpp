#include<iostream>
#include "OneLinkedList.h"

using namespace std;

OneLinkedList makeFraction(Node* head)
{
    OneLinkedList t;

    if (!t.Init(head))
    {
        cout << "The parameters are entered incorrectly" << endl;

    };

    return t;
}

int main()
{
    int elem;
    
    OneLinkedList myList;

    myList.Read();

    makeFraction(myList.GetHead());
    
    myList.Display();

    myList.sortUpNode();
    myList.Display();

    if (myList.Init(myList.GetHead()))
    {
        cout << "Vvedit element, yakyi treba vydalyty - ";
        cin >> elem;

        myList.deleteNode(myList.find(elem));

        myList.Display();
    }
   
    return 0;
}