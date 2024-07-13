#include<iostream>
#include<vector>
#define M (10<<7)
using namespace std;

int main(){
    vector<int> G[M+1];
    int ne;
    cout<<"Enter no of edges:"<<endl;
    cin>>ne;
    for (int i=1;i<=ne;i++){
        int u,v;
        cout<<"Enter u and v:"<<endl;
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    for(int u=1;u<=M;u++){
        int l=G[u].size();
        for(int i=0;i<=l-1;i++){
            cout<<G[u][i]<<" ";
        }
        cout<<endl;
    }
}
