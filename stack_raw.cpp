#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n,x,top;
    cout<<"Enter no of elements"<<endl;
    cin>>n;

    stack<int> Basket;
    cout<<"Enter the elements"<<endl;

    for(int i=0; i<=n-1; i++)
    {
        cin>>x;
        Basket.push(x); //1.push
    }
    top=Basket.top();

    int size=sizeof(Basket);

    cout<<"Size of basket"<<size<<endl;
    cout<<"Size of basket: "<<n<<endl;
    cout<<"Top most element is: "<<top<<endl; //6.accessing the top element

    cout<<"To see if basket is empty"<<endl; //4.is full
    if(Basket.empty()==1)
    {
        cout<<"The basket is empty!"<<endl;
    }
    else if(Basket.empty()==0)
    {
        cout<<"The basket is not empty"<<endl;
    }

    cout<<"Traversing the stack and printing:"<<endl;
    while(Basket.empty()==0)
    {
        int top_element=Basket.top();
        cout<<top_element<<endl;
        Basket.pop(); //2.pop
    }
    if(Basket.empty()==1) //3.empty
    {
        cout<<"The basket is empty!"<<endl;
    }
    else if(Basket.empty()==0)
    {
        cout<<"The basket is not empty"<<endl;
    }

    return 0;
}

