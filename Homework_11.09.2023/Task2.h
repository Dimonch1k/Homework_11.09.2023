#pragma once
#include <iostream>
using namespace std;


class Node {
public:
    int value;
    Node* next;

    Node()
    {
        value = 0;
        next = nullptr;
    }
    Node(int value)
    {
        this->value = value;
        this->next = nullptr;
    }
};


void putNodeToTail(Node*& head, int value)
{
    Node* newNode = new Node(value);

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node* tmp = new Node();
    tmp = head;

    while (tmp->next != nullptr)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void display(Node* head)
{
    while (head != nullptr)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << "\n\n";
}

string isEmpty(Node* head)
{
    if (!head)
    {
        return "\n\nThe queue is empty!\n\n";
    }
    return "\n\nThe queue is filled!\n\n";
}

void getFirstElem(Node* head)
{
    if (head)
    {
        cout << "First element: " << head->value << "\n\n";
        return;
    }
    cout << "There are no elements!!!\n\n";
}


void findElement(Node* head, int elem)
{
    while (head != nullptr)
    {
        if (head->value == elem)
        {
            cout << "The element was found in queue!\n\n";
            return;
        }
        head = head->next;
    }
    cout << "The element wasn't found in queue!\n\n";
}

void deQueue(Node*& head)
{
    cout << "The queue was deleted!!!\n\n\n";
    delete head;
}