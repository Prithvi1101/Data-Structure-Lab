// A student has following four attributes/properties (Name, ID, CGPA, Age). Input n students information and calculate the average CGPA in the class

#include<iostream>
 using namespace std;

 struct Student{
     int id;
     string name;
     double cgpa,age;

      double input(){
   cout<<"\nEnter information for Student: ";
   cout<<"\nEnter id: ";
    cin>> id ;
     cout<<"Enter name: ";
    cin>> name ;
     cout<<"Enter Age: ";
    cin>> age ;
     cout<<"Enter Cgpa: ";
    cin>> cgpa ;
    return cgpa;
  }

     void information(){
   cout<< "\nID: "<< id<< endl;
   cout<< "Name: "<< name<<endl;
   cout<< "CGPA: "<< cgpa<<endl;
   cout<< "Age: "<< age<<endl;

 }};

   int main (){
       Student s;
       int n,sum=0;
       double cgpa;
       cout<< "Enter the number of students: ";
       cin>>n;
       for(int i=0;i<n;i++){
        cgpa=s.input();
        sum+=cgpa;
       }
      cout<<"Average cgpa: "<< sum/n<<endl;
  return 0;
  }


