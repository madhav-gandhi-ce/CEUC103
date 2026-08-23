// Practical 6.3
// To update, delete, edit studnet details.
// Last Updated : 23rd August, 2026 at 23:03.

#include <iostream>
#include <iomanip>
int main(){
    using namespace std;
    int num_stu;
    string id, name, grade;
    int sem_num, total, choice, num_sub, marks;
    float percentage;

    cout<<"************************************************\n";
    cout<<"     STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"************************************************\n\n";

    cout<<"Enter Number Of Students : ";
    cin>>num_stu;

    for (int i=0; i<num_stu; i++){
        cout<<"Enter Student Details : \n\n";
        cout<<left<<setw(20)<<"Enter Enrollment ID"<<": ";
        cin>>id;
        cout<<setw(20)<<"Enter Your Name"<<": ";
        cin.ignore();
        getline(cin, name);
        cout<<setw(20)<<"Enter Percentage"<<": ";
        cin>>percentage;
        cout<<setw(20)<<"Enter Grade"<<": ";
        cin>>grade;
    }

    for (int i=0; i<num_stu; i++){
        cout<<setw(10)<<id;
        cout<<setw(15)<<name;
        cout<<setw(6)<<percentage;
        cout<<grade;
        cout<<endl;
    }

    cout<<"\n------------------------------------------------\n";
    cout<<"Current Student Records\n\n";



    // m : cout<<"-------------------MAIN MENU--------------------\n\n\n";

    // cout<<"1. Register New Student\n2. Display Student Record\n3. Enter Student Marks\n4. Display Academic Result\n5. Exit\n\n";

    // cout<<"Enter Your Choice : ";
    // cin>>choice;
    // switch(choice)
    // {
    // case 1:
    //     flag_std=false;
    //     cout<<"\n------------------------------------------------\n";
    //     cout<<"Student Registration\n";
    //     cout<<"------------------------------------------------\n\n"<<endl;
    //     reg_another_stu = 'Y';
    //     while(reg_another_stu=='Y'){
    //             cout<<endl;
    //         cout<<left<<setw(20)<<"Enter Enrollment ID"<<": ";
    //         cin>>id;
    //         cout<<setw(20)<<"Enter Your Name"<<": ";
    //         cin.ignore();
    //         getline(cin, name);
    //         cout<<setw(20)<<"Enter Branch Name"<<": ";
    //         getline(cin, branch);
    //         cout<<setw(20)<<"Enter Semester No."<<": ";
    //         cin>>sem_num;
    //         cout<<setw(20)<<"Enter Contact No."<<": ";
    //         cin>>con_num;
    //         cout<<"\n";
    //         cout<<"Student Registered Successfully.\n\n";
    //         cout <<"------------------------------------------------\n\n";
    //         q : cout<<"Register another student? (Y/N) : ";
    //         cin>>reg_another_stu;
    //         cout<<endl;
    //         if (reg_another_stu=='N'){
    //             cout<<"Returning to Main Menu...\n\n";
    //            // goto m;
    //         }
    //         else if (reg_another_stu != 'Y'){
    //             cout<<"Invalid input, try again!\n\n";
    //             goto q;
    //         }

    //     }

    //     goto m;

    // case 2:
    //     if (flag_std==true){
    //         cout<<"\nRegister new student first to display!\n\n";
    //         goto m;
    //     }
    //     else{
    //         cout<<"\n\n------------------------------------------------\n";
    //         cout<<"Student Information\n";
    //         cout<<"------------------------------------------------\n\n"<<endl;

    //         cout << setw(15) <<"Enrollment ID"<<": "<<id<<endl;
    //         cout << setw(15) <<"Name"<<": "<<name<<endl;
    //         cout << setw(15) <<"Branch"<<": "<<branch<<endl;
    //         cout << setw(15) <<"Semester"<<": "<<sem_num<<endl;
    //         cout << setw(15) <<"Contact No."<<": "<<con_num<<endl<<endl;
    //         cout <<"------------------------------------------------\n\n";
    //         goto m;
    //     }
    // case 3:
    //     flag_mark=false;
    //     cout<<"\n------------------------------------------------\n";
    //     cout<<"Enter Student Marks\n";
    //     cout<<"------------------------------------------------\n\n"<<endl;

    //     cout<<"Enter number of subjects : ";
    //     cin>>num_sub;
    //     for (int i=1; i<=num_sub; i++){
    //         t : cout<<"Enter marks of subject "<<right<<setw(2)<<i;
    //         cout<<" : ";
    //         cin>>marks;
    //         if (marks<0 || marks>100){
    //             cout<<"Invalid Marks, try again!\n\n";
    //             goto t;
    //         }
    //         else {
    //             cout<<endl;
    //             total = total+marks;
    //         }
    //     }

    //     cout<<"\nMarks Entered Successfully.\n\n";
    //     cout <<"------------------------------------------------\n\n";
    //     goto m;

    // case 4:
    //     if (flag_mark==true){
    //         cout<<"\nEnter Students Marks first!\n\n";
    //         goto m;
    //     }
    //     else{

    //         avg=((float)total)/num_sub;
    //         percentage=((float)total)/num_sub;
    //         cout<<"\n\n------------------------------------------------\n";
    //         cout<<"Academic Result\n";
    //         cout<<"------------------------------------------------\n\n"<<endl;

    //         cout<<left<<setw(15)<<"Total Marks"<<": "<<total<<endl;
    //         cout<<setw(15)<<"Average Marks"<<": "<<fixed<<setprecision(2)<<avg<<endl;
    //         cout<<setw(15)<<"Percentage"<<": "<<fixed<<setprecision(2)<<percentage<<"%"<<endl<<endl;


    //         if (percentage>=40){
    //             cout<<left<<setw(15)<<"Result"<<": PASS"<<endl;
    //         }
    //         else {
    //             cout<<setw(15)<<"Result"<<": FAIL"<<endl;
    //         }

    //         if (percentage>=90){
    //             cout<<setw(15)<<"Grade"<<": O"<<endl;
    //             cout<<setw(15)<<"Perfomance"<<": Outstanding"<<endl;
    //         }
    //         else if (percentage>=80){
    //             cout<<setw(15)<<"Grade"<<": A+"<<endl;
    //             cout<<setw(15)<<"Perfomance"<<": Excellent"<<endl;
    //         }
    //         else if (percentage>=70){
    //             cout<<setw(15)<<"Grade"<<": A"<<endl;
    //             cout<<setw(15)<<"Perfomance"<<": Very Good"<<endl;
    //         }
    //         else if (percentage>=60){
    //             cout<<setw(15)<<"Grade"<<": B+"<<endl;
    //             cout<<setw(15)<<"Perfomance"<<": Good"<<endl;
    //         }
    //         else if (percentage>=50){
    //             cout<<setw(15)<<"Grade"<<": B"<<endl;
    //             cout<<setw(15)<<"Perfomance"<<": Satisfactory"<<endl;
    //         }
    //         else if (percentage>=40){
    //             cout<<setw(15)<<"Grade"<<": C"<<endl;
    //             cout<<setw(15)<<"Perfomance"<<": Needs Improvement"<<endl;
    //         }
    //         else if (percentage<40){
    //             cout<<setw(15)<<"Grade"<<": F"<<endl;
    //             cout<<setw(15)<<"Perfomance"<<": Failed"<<endl;
    //         }
    //         cout<<"\n\n";
    //         goto m;
    //     }
    // case 5:
    //     cout<<"Thank You...";
    //     exit(0);
    // default:
    //     cout<<"\nInvalid Choice!\n\n";
    //     goto m;
    // }


}