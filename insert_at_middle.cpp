#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
    node() : data(0), next(nullptr) {} // Constructor to initialize data and next pointer
};

// Function to count the number of nodes in the linked list
int countNodes(node *head) {
    int count = 0;
    for (node *temp = head; temp != nullptr; temp = temp->next) {
        count++;
    }
    return count;
}

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

    // Inserting a new node at the middle of the linked list
    int middle = countNodes(head) / 2; // Calculate the middle position
    node *temp = head;
    for (int i = 1; i < middle; ++i) {
        temp = temp->next;
    }

    node *newNode = new node();
    cout << "Enter data for the new node to insert at the middle: ";
    cin >> newNode->data;
    newNode->next = temp->next;
    temp->next = newNode;

    // Printing the final linked list
    cout << "Linked list after insertion at the middle:" << endl;
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
