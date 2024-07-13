#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
struct Student
{
    string name;
    int id,age;
    float cgpa;

    Student(string n,int id,float cgpa,int age)
    {


        cout<<"name: ";
        cin.ignore(); //input buffer/undesirable character
        getline(cin,name);
        cout<<"ID: ";
        cin>>id;
        cout<<"CGPA :";
        cin>>cgpa;
        cout<<"Age: ";
        cin>>age;
    }
};

void printStudents(Student students[],int n)
    {

        for(int i=0; i<n; i++)
        {

            cout<<"ID: "<<students[i].id<<endl;
            cout<<"Name: "<<students[i].name<<endl;
            cout<<"Age: "<<students[i].age<<endl;
            cout<<"CGPA: "<<students[i].cgpa<<endl;
        }
    }
int main()
{
    cout<<"Enter no of students:";
    int n,number;
    cin>>n;
    Student arr[n];
    for(int i=0; i<=n-1; i++)
    {

        Student();
    }
}




