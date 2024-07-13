#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cout<<"Enter size of stack:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements to be entered:"<<endl;
    for(int i=0;i<=n-1;i++)
    {
        cin>>x;
        arr[i]=x;
    }
    int top=arr[n-1];
    cout<<"Top element is "<<top<<endl;
    cout<<"To see if stack is empty:"<<endl;
    int size= sizeof(arr);
    if(size==0)
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        cout<<"Not empty"<<endl;
    }
    cout<<"Traversing the stack:"<<endl;
    for(int i=n-1;i>=0;i--)
    {
        int top_element=arr[i];
        cout<<top_element<<endl;
        n=n-2;
    }
    return 0;
}

