// Practical 8.1
// Use Functions
// Last updated on 19th November, 2026

#include <iostream>
#include <iomanip>
using namespace std;

char id[10], name[20], branch[20], grade[3], result[5];
int i, sem, marks[5], total_mark=0;
float per;

void displayHeader(){
    cout<<"********************************************\n";
    cout<<"\tSTUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"********************************************\n\n";
}

void acceptStudentDetails(){
    cout<<"--------Student Registration--------\n\n";
    cout<<left<<setw(24)<<"Enter Enrollment Number"<<" : ";
    cin.getline(id, 10);
    cout<<setw(24)<<"Enter Student Name"<<" : ";
    cin.getline(name, 20);
    cout<<setw(24)<<"Enter Branch"<<" : ";
    cin.getline(branch, 20);
    cout<<setw(24)<<"Enter Semester"<<" : ";
    cin>>sem;
    cout<<setw(24)<<"Enter Marks"<<endl;
    for (i=0; i<5; i++){
        cout<<left<<"Subject "<<i+1<<" : ";
        cin>>marks[i];
    }
}

void calculateAcademicResult(){
    for (i=0; i<5; i++){
        total_mark += marks[i];
    }
    per = total_mark/5.0;
    if (per>=90){
        grade[0] = 'O';
        grade[1] = '\0';
    }
    else if (per>=80){
        grade[0] = 'A';
        grade[1] = '+';
        grade[2] = '\0';
    }
    else if (per>=70){
        grade[0] = 'A';
        grade[1] = '\0';
    }
    else if (per>=60){
        grade[0] = 'B';
        grade[1] = '+';
        grade[2] = '\0';
    }
    else if (per>=50){
        grade[0] = 'B';
        grade[1] = '\0';
    }
    else if (per>=40){
        grade[0] = 'C';
        grade[1] = '\0';
    }
    else {
        grade[0] = 'F';
        grade[1] = '\0';
    }
    cout<<endl;
}
void displayStudentReport(){
    cout<<"\n--------------------------------------------\n";
    cout<<"Academic Report\n";
    cout<<"--------------------------------------------\n\n";

    cout<<setw(18)<<"Enrollment Number"<<" : "<<id<<endl;
    cout<<setw(18)<<"Student Name"<<" : "<<name<<endl;
    cout<<setw(18)<<"Branch"<<" : "<<branch<<endl;
    cout<<setw(18)<<"Semester"<<" : "<<sem<<endl;
    cout<<setw(18)<<"Total Marks"<<" : "<<total_mark<<endl;
    cout<<setw(18)<<"Percentage"<<" : "<<per<<"%"<<endl;
    cout<<setw(18)<<"Grade"<<" : "<<grade<<endl;
    if (per<40){
        cout<<setw(18)<<"Result"<<" : "<<"FAIL\n"; 
    }
    else {
        cout<<setw(18)<<"Result"<<" : "<<"PASS\n";
    }
}
int main(){
    displayHeader();
    acceptStudentDetails();
    calculateAcademicResult();
    displayStudentReport();
    cout<<"\n--------------------------------------------\n";
    cout<<"Program executed Successfully Using User-defined Functions\n";
    cout<<"--------------------------------------------\n";
}