#include<bits/stdc++.h>
using namespace std;
struct Student
{
    int ID,batch;
    double age;


    void give_introduction()
    {
        cout<<"ID = "<<ID<<endl;
        cout<<"batch = "<<batch<<endl;
        cout<<"Age = "<<age<<endl;
    }
};
int main()
{

Student A,B,C,D,E;
/*cout<<"First student properties:\n";

cin>>A.ID>>A.batch>>A.age;
cout<<"Second student properties:\n";
cin>>B.ID>>B.batch>>B.age;
cout<<"Third student properties:\n";
cin>>C.ID>>C.batch>>C.age;
cout<<"Fourth student properties:\n";
cin>>D.ID>>D.batch>>D.age;
cout<<"Fifth student properties:\n";
cin>>E.ID>>E.batch>>E.age;

*/
//A.input();
A.give_introduction();
B.give_introduction();
C.give_introduction();
D.give_introduction();
E.give_introduction();
}
