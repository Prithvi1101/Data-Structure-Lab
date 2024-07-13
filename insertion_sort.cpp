//implement intersection sort
//multiplication of two matrixes A(m*n) and B(n*p)
//A student has following four attributes/properties-1.name 2.id 3.cgpa 4.age
#include<bits/stdc++.h>
 using namespace std;
 int main(){

     int n,i,step,firstelement;
     cout<<"enter array size: ";
     cin>>n;
     int ar[n];
     cout<<"Enter elements: ";
     for(int i=0; i<n; i++){
        cin>>ar[i];
     }
     for (step=1; step<=n-1; step++){
        firstelement=ar[step];
        i=step-1;
        while(firstelement<ar[i]){
            ar[i+1]=ar[i];
            i--;
        }
        ar[i+1]=firstelement;
     }

     cout<<"after insertion sort: ";
     for (i = 0; i < n; i++)
    {
        cout << " " << ar[i];
    }
 }

