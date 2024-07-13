#include<bits/stdc++.h>
#include<iostream>
#include<string>
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

        cout<<"name: ";
        cin.ignore(); //input buffer/undesirable character
        getline(cin,name);
        cout<<"ID: ";
        cin>>ID;
        cout<<"CGPA :";
        cin>>CGPA;
        cout<<"Age: ";
        cin>>age;
    }


};
void printStudents(Student students[],int n)
    {

        for(int i=0; i<n; i++)
        {

            cout<<"ID: "<<students[i].ID<<endl;
            cout<<"Name: "<<students[i].name<<endl;
            cout<<"Age: "<<students[i].age<<endl;
            cout<<"CGPA: "<<students[i].CGPA<<endl;
        }
    }
  void swapStudents(Student &a, Student &b)
    {

        Student temp=a;
        a=b;
        b=temp;
    }
    void sortByID(Student students[],int n)
    {

        cout<<"SORTING BY ID USING BUBBLE"<<endl;
        for(int i=0; i<=n-1; i++) //bubble
        {

            for(int j=0; j<n-i-1; j++)
            {

                if(students[j].ID>students[j+1].ID)
                {

                    swapStudents(students[j],students[j+1]);
                }
            }
        }
        printStudents(students,n);
    }

     void sortByAge(Student students[],int n)
    {

        cout<<"SORTING BY AGE USING BUBBLE"<<endl;
        for(int i=0; i<=n-1; i++) //bubble
        {

            for(int j=0; j<n-i-1; j++)
            {

                if(students[j].age>students[j+1].age)
                {

                    swapStudents(students[j],students[j+1]);
                }
            }
        }
        printStudents(students,n);
    }
      void sortByCGPAandAGE(Student students[],int n)
    {

        cout<<"SORTING BY CGPA & AGE USING BUBBLE"<<endl;
        for(int i=0; i<=n-1; i++) //bubble
        {

            for(int j=0; j<n-i-1; j++)
            {

                if(students[j].CGPA>students[j+1].CGPA || (students[j].CGPA==students[j+1].CGPA &&students[j].age>students[j+1].age))
                {

                    swapStudents(students[j],students[j+1]);
                }
            }
        }
        printStudents(students,n);
    }
int main()
{
    cout<<"Enter no of elements:";
    int n,number;
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
    }

    sortByID(arr,n);
    sortByAge(arr,n);
    sortByCGPAandAGE(arr,n);



    return 0;

}
