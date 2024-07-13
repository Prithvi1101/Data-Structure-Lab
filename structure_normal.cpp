#include<bits/stdc++.h>
using namespace std;
struct Student
{
    string name;
    int ID;
    double CGPA,age;

    void give_introduction()
    {
        cout<<"Name = "<<name<<endl;
        cout<<"ID = "<<ID<<endl;
        cout<<"CGPA = "<<CGPA<<endl;
        cout<<"Age = "<<age<<endl;
    }
    void input()
    {

        cin.ignore();
        getline(cin,name);
        cin>>ID>>CGPA>>age;
    }
};
int main()
{
    cout<<"Enter no of elements:";
    int n;
    cin>>n;
    Student arr[n];
    for(int i=0; i<=n-1; i++)
    {
            arr[i].input();
    }
    double sum=0.0;
    for(int i=0; i<=n-1; i++)
    {

        arr[i].give_introduction();
        cout<<"Average CGPA:"<<(sum/n)<<endl;
    }

    return 0;

}
