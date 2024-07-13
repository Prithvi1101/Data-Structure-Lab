#include<iostream>
using namespace std;

int main() {
    // Write C code here
    int size;
    cout<<"Enter size:"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
   cout<<"The unsorted array:";
    for(int i=0;i<=size-1;i++)
    {
        cout<<arr[i]<<endl;
    }
    int step,f_pos,min_pos,min_element,temp;
    for(step=0;step<size;step++)
    {
        f_pos=step;
        min_pos=f_pos;
        min_element=arr[f_pos];

        for(int i=f_pos+1;i<=size-1;i++)
        {

            if(min_element>arr[i])
            {

                min_pos=i;
                min_element=arr[i];

            }
            temp=arr[f_pos];
       arr[f_pos]=arr[min_pos];
        arr[min_pos]=temp;
        }

    }
    cout<<"After Sorting: "<<endl;
    for(int i=0;i<=size-1;i++)
    {

        cout<<arr[i]<<endl;
    }
}
