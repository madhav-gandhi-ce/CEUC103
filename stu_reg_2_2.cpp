
#include <iostream>
#include <iomanip>

int main(){
    using namespace std;
    string id, name, branch;
    int sem_num;
    long long con_num;

    cout<<"************************************************\n";
    cout<<"     STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"************************************************\n\n"<<endl;


    cout<<"Software Version : 1.1\n";
    cout<<"Institute Name   : CHARUSAT\n";
    cout<<"Academic Year    : 2026-2027\n\n"<<endl;

    cout<<"------------------------------------------------\n";
    cout<<"STUDENT REGISTRATION\n";
    cout<<"------------------------------------------------\n\n"<<endl;

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



    cout <<left<<setw(20) <<"Enrollment ID"<<": "<<id<<endl;
    cout << setw(20) <<"Name"<<": "<<name<<endl;
    cout << setw(20) <<"Branch"<<": "<<branch<<endl;
    cout << setw(20) <<"Semester"<<": "<<sem_num<<endl;
    cout << setw(20) <<"Contact No."<<": "<<con_num<<endl;
    cout << setw(20) <<"------------------------------------------------\n";

}
