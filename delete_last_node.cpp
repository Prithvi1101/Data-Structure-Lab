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

    // Deleting the last node
    if (head != nullptr) {
        if (head->next == nullptr) {
            // If there is only one node in the list
            delete head;
            head = nullptr;
            cout << "Last node (and the only node) deleted successfully." << endl;
        } else {
            node *temp = head;
            while (temp->next->next != nullptr) {
                temp = temp->next;
            }
            delete temp->next;
            temp->next = nullptr;
            cout << "Last node deleted successfully." << endl;
        }
    } else {
        cout << "Linked list is empty. No node to delete." << endl;
    }

    // Printing the linked list after deletion
    cout << "Linked list after deleting the last node:" << endl;
    for (node *i = head; i != nullptr; i = i->next) {
        cout << i->data << " -> ";
    }
    cout << "NULL" << endl;

    // Cleanup: delete all remaining nodes to prevent memory leaks
    node *current = head;
    while (current != nullptr) {
        node *next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
