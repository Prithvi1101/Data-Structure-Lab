#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
    node() : data(0), next(nullptr) {} // Constructor to initialize data and next pointer
};

int main() {
    node *head = nullptr;

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

        // Inserting at the end of the linked list
        if (head == nullptr) {
            head = newNode;
        } else {
            node *temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Printing the initial linked list
    cout << "Linked list after initial insertion:" << endl;
    for (node *i = head; i != nullptr; i = i->next) {
        cout << i->data << " -> ";
    }
    cout << "NULL" << endl;

    // Finding the node with data value 50 and inserting a new node with data value 500 after it
    node *temp = head;
    while (temp != nullptr && temp->data != 50) {
        temp = temp->next;
    }

    if (temp != nullptr) {
        node *newNode = new node();
        newNode->data = 500;
        newNode->next = temp->next;
        temp->next = newNode;

        cout << "Node with data value 500 inserted after node with data value 50." << endl;
    } else {
        cout << "Node with data value 50 not found in the linked list." << endl;
    }

    // Printing the final linked list
    cout << "Linked list after insertion of node with data value 500:" << endl;
    for (node *i = head; i != nullptr; i = i->next) {
        cout << i->data << " -> ";
    }
    cout << "NULL" << endl;

    // Cleanup: delete all nodes to prevent memory leaks
    node *current = head;
    while (current != nullptr) {
        node *next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
