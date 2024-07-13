#include<iostream>
using namespace std;
struct node{
int data;
node * next;
node()
{

    next=NULL;
}
};
int main()
{


    node *head=NULL,*first,*second;

    first = new node();
    second= new node();
    int x;
    cin>>x;
    first->data=x;
    first->next=second;
    head=first;


    int y;
    cin>>y;
    second->data=y;
    second->next=NULL;

    node *i;
    for (i= head; i!=NULL; i=i->next)
    {

        cout<< i->data <<endl;
    }

    delete first;
    delete second;
}


/*#include<iostream>
using namespace std;

struct node {
    int data;
    node *next;
    node() {
        next = NULL;
    }
};

int main() {
    node *head = NULL, *first, *second;

    first = new node();
    second = new node();

    int x;
    cin >> x;
    first->data = x;
    first->next = second;
    head = first;

    int y;
    cin >> y;
    second->data = y;
    second->next = NULL;

    node *i;
    for (i = head; i != NULL; i = i->next) {
        cout << i->data << endl;
    }

    // Clean up memory
    delete first;
    delete second;

    return 0;
}
*/
