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
    cout << "Linked list after initial insertion at the end:" << endl;
    for (node *i = head; i != nullptr; i = i->next) {
        cout << i->data << " -> ";
    }
    cout << "NULL" << endl;

    // Inserting a new node at the end based on user input
    char choice;
    do {
        int newData;
        cout << "Enter data for the new node: ";
        cin >> newData;

        node *newNode = new node();
        newNode->data = newData;

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

        cout << "Node inserted at the end. Do you want to insert another node? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    // Printing the final linked list
    cout << "Linked list after all insertions at the end:" << endl;
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
