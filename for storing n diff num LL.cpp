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
    node *head = NULL, *prev_node = NULL;

    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        int x;
        cout << "Enter data for node " << i << ": ";
        cin >> x;

        node *new_node = new node();
        new_node->data = x;

        if (head == NULL) {
            head = new_node; // First node becomes the head
        } else {
            prev_node->next = new_node; // Link the previous node to the new node
        }

        prev_node = new_node; // Move prev_node to the new node
    }

    int y;
    cout << "Enter a value to search for: ";
    cin >> y;

    bool found = false;
    for (node *i = head; i != nullptr; i = i->next) {
        if (i->data == y) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Value " << y << " found in the list." << endl;
    } else {
        cout << "Value " << y << " not found in the list." << endl;
    }

    return 0;
}
