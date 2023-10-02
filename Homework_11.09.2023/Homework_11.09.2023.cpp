#include <iostream>
using namespace std;






#define Task 2

#if Task == 1

#include "Task1.h"


int main()
{
    Node* head1 = nullptr;
    Node* head2 = nullptr;

    cout << "Input 5 numbers to first stack: \n";
    for (int i = 0; i < 5; i++) // The user input 5 values in list
    {
        int value = 0;
        cout << "\Input " << i + 1 << " number: ";
        cin >> value;
        putNodeToTail(head1, value); // Put node to the end of the list   
    }

    cout << "\n\Input 5 numbers to second stack: \n";
    for (int i = 0; i < 5; i++) // The user input 5 values in list
    {
        int value = 0;
        cout << "\Input " << i + 1 << " number: ";
        cin >> value;
        putNodeToTail(head2, value); // Put node to the end of the list   
    }

    cout << "\n\nFirst stack: ";
    display(head1);

    cout << "Second stack: ";
    display(head2);

    isEqual(head1, head2);
}




#elif Task == 2

#include "Task2.h"

int main()
{
    Node* head = nullptr;


    for (int i = 0; i < 4; i++) // The user input 5 values in list
    {
        int value = 0;
        cout << "Enter " << i + 1 << " number: ";
        cin >> value;
        putNodeToTail(head, value); // Put node to the end of the queue   
    }
    cout << "\nQueue: ";
    display(head);

    cout << isEmpty(head); // Сhecking the queue for emptiness
    getFirstElem(head);

    findElement(head, 2); // Give the message about is element or not in queue

    deQueue(head);

}
#endif