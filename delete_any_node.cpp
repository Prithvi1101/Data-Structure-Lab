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

    // Deleting a user-specified node
    int totalNodes = countNodes(head);
    int position;
    cout << "Enter the position of the node you want to delete (1-" << totalNodes << "): ";
    cin >> position;

    if (position < 1 || position > totalNodes) {
        cout << "Invalid position. Cannot delete node." << endl;
    } else if (position == 1) {
        // Deleting the first node
        node *temp = head;
        head = head->next;
        delete temp;
        cout << "First node deleted successfully." << endl;
    } else {
        // Deleting a middle or last node
        node *prev = nullptr;
        node *temp = head;
        for (int i = 1; i < position; ++i) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        delete temp;
        cout << "Node at position " << position << " deleted successfully." << endl;
    }

    // Printing the linked list after deletion
    cout << "Linked list after deleting the specified node:" << endl;
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
