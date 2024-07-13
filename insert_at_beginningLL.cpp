#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
    node()
    {
        next=NULL;
    }
};

int main() {
    node *head = NULL;

    int n;
    cout << "Enter the number of initial nodes: ";
    cin >> n;

    // Creating the initial linked list
    for (int i = 1; i <= n; ++i) {
        int x;
        cout << "Enter data for node " << i << ": ";
        cin >> x;

        node *newNode = new node();
        newNode->data = x;
        newNode->next = head;
        head = newNode;
    }

    // Printing the initial linked list
    cout << "Linked list after initial insertion at the beginning:" << endl;
    for (node *i = head; i != NULL; i = i->next) {
        cout << i->data << " -> ";
    }
    cout << "NULL" << endl;

    // Inserting new nodes at the beginning based on user input
    char choice;
    do {
        int newData;
        cout << "Enter data for the new node: ";
        cin >> newData;

        node *newNode = new node();
        newNode->data = newData;
        newNode->next = head;
        head = newNode;

        cout << "Node inserted at the beginning. Do you want to insert another node? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    // Printing the final linked list
    cout << "Linked list after all insertions at the beginning:" << endl;
    for (node *i = head; i != NULL; i = i->next) {
        cout << i->data << " -> ";
    }
    cout << "NULL" << endl;



    return 0;
}
