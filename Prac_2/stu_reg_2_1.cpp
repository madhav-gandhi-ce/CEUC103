// Practical 2.1
// To take input and print Student Information
// Last updated on 15th August, 2026 at 17:42.
#include <iostream>

int main(){
    using namespace std;
    string id, name, branch;
    int sem_num;
    long long con_num;

    cout<<"************************************************\n";
    cout<<"     STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"************************************************\n\n"<<endl;


    cout<<"Enter Enrollment ID : ";
    cin>>id;
    cout<<"Enter Your Name : ";
    cin.ignore();
    getline(cin, name);
    cout<<"Enter Branch Name : ";
    //cin.ignore();
    getline(cin, branch);
    cout<<"Enter Semester No. : ";
    cin>>sem_num;
    cout<<"Enter Contact No. : ";
    cin>>con_num;


    cout<<"\n\n------------------------------------------------\n";
    cout<<"STUDENT INFORMATION\n";
    cout<<"------------------------------------------------\n\n"<<endl;

    cout<<"Enrollment ID : "<<id<<endl;
    cout<<"Name          : "<<name<<endl;
    cout<<"Branch        : "<<branch<<endl;
    cout<<"Semester      : "<<sem_num<<endl;
    cout<<"Contact No.   : "<<con_num<<endl;
    cout<<"------------------------------------------------\n";

}