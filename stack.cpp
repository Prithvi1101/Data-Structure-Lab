#include<iostream>
#include<stack>
using namespace std;

int main (){
     stack <int> Basket;
     int n;
     cin>>n;
     for (int i=1; i<=n; i++){
        int x;
        cin>>x;
        Basket.push(x);
     }
     int top=Basket.top();
     cout<<"Top element is:"<<top<<endl;
    if(Basket.empty()==1){
        cout<<"empty"<< endl;
    }
        else
           {
        cout<<"Full"<< endl;
    }

    while(Basket.empty()==0){
        int top_element=Basket.top();
        cout<<top_element<<" ";
        Basket.pop();
    }

}
