#include <iostream>
using namespace std;

int main() {
    int i,n,mid,k,start=0;
    cout<<"Enter your array size:";
    cin>>n;
    int end=n-1;
    int arr[n];
    cout<<"Enter the array values:";
    for(i=0;i<n;i++){

        cin>>arr[i];
    }
   cout<<"Enter the value you want: ";
    cin>>k;
    while(start<=end){
        mid=(start+end)/2;
        if(k==arr[mid]){
            cout<<"Position: "<<mid<<endl;
            break;
        }else if(k<arr[mid]){
            end=mid-1;
        }else if(k>arr[mid]){
            start=mid+1;
        }
    }
    if (start > end) {
        cout << "-1" << endl;
    }

    return 0;
}
