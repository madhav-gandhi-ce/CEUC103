// Practical 5.1
// To display marks of multiple subjects
// Last Updated : 7th August, 2026 at 4:08pm
#include <iostream>
#include <iomanip>
int main(){
    using namespace std;
    string id, name, branch;
    int sem_num, total, choice, num_sub, marks;
    float avg, percentage;
    long long con_num;
    bool flag_std=true;
    bool flag_mark=true;

    cout<<"************************************************\n";
    cout<<"     STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"************************************************\n\n"<<endl;

    m : cout<<"-------------------MAIN MENU--------------------\n\n\n";

    cout<<"1. Register New Student\n2. Display Student Record\n3. Enter Student Marks\n4. Display Academic Result\n5. Exit\n\n";

    cout<<"Enter Your Choice : ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        flag_std=false;
        cout<<"\n------------------------------------------------\n";
        cout<<"Student Registration\n";
        cout<<"------------------------------------------------\n\n"<<endl;

        cout<<left<<setw(20)<<"Enter Enrollment ID"<<": ";
        cin>>id;
        cout<<setw(20)<<"Enter Your Name"<<": ";
        cin.ignore();
        getline(cin, name);
        cout<<setw(20)<<"Enter Branch Name"<<": ";
        getline(cin, branch);
        cout<<setw(20)<<"Enter Semester No."<<": ";
        cin>>sem_num;
        cout<<setw(20)<<"Enter Contact No."<<": ";
        cin>>con_num;
        cout<<"\n";
        cout<<"Student Registered Successfully.\n\n";
        cout <<"------------------------------------------------\n\n";
        goto m;

    case 2:
        if (flag_std==true){
            cout<<"\nRegister new student first to display!\n\n";
            goto m;
        }
        else{
            cout<<"\n\n------------------------------------------------\n";
            cout<<"Student Information\n";
            cout<<"------------------------------------------------\n\n"<<endl;

            cout << setw(15) <<"Enrollment ID"<<": "<<id<<endl;
            cout << setw(15) <<"Name"<<": "<<name<<endl;
            cout << setw(15) <<"Branch"<<": "<<branch<<endl;
            cout << setw(15) <<"Semester"<<": "<<sem_num<<endl;
            cout << setw(15) <<"Contact No."<<": "<<con_num<<endl<<endl;
            cout <<"------------------------------------------------\n\n";
            goto m;
        }
    case 3:
        flag_mark=false;
        cout<<"\n------------------------------------------------\n";
        cout<<"Enter Student Marks\n";
        cout<<"------------------------------------------------\n\n"<<endl;

        cout<<"Enter number of subjects : ";
        cin>>num_sub;
        for (int i=1; i<=num_sub; i++){
            cout<<"Enter marks of subject "<<right<<setw(2)<<i;
            cout<<" : ";
            cin>>marks;
            cout<<endl;
            total = total+marks;
        }

        cout<<"\nMarks Entered Successfully.\n\n";
        cout <<"------------------------------------------------\n\n";
        goto m;

    case 4:
        if (flag_mark==true){
            cout<<"\nEnter Students Marks first!\n\n";
            goto m;
        }
        else{

            avg=((float)total)/num_sub;
            percentage=((float)total)/num_sub;
            cout<<"\n\n------------------------------------------------\n";
            cout<<"Academic Result\n";
            cout<<"------------------------------------------------\n\n"<<endl;

            cout<<left<<setw(15)<<"Total Marks"<<": "<<total<<endl;
            cout<<setw(15)<<"Average Marks"<<": "<<fixed<<setprecision(2)<<avg<<endl;
            cout<<setw(15)<<"Percentage"<<": "<<fixed<<setprecision(2)<<percentage<<"%"<<endl<<endl;


            if (percentage>=40){
                cout<<left<<setw(15)<<"Result"<<": PASS"<<endl;
            }
            else {
                cout<<setw(15)<<"Result"<<": FAIL"<<endl;
            }

            if (percentage>=90){
                cout<<setw(15)<<"Grade"<<": O"<<endl;
                cout<<setw(15)<<"Perfomance"<<": Outstanding"<<endl;
            }
            else if (percentage>=80){
                cout<<setw(15)<<"Grade"<<": A+"<<endl;
                cout<<setw(15)<<"Perfomance"<<": Excellent"<<endl;
            }
            else if (percentage>=70){
                cout<<setw(15)<<"Grade"<<": A"<<endl;
                cout<<setw(15)<<"Perfomance"<<": Very Good"<<endl;
            }
            else if (percentage>=60){
                cout<<setw(15)<<"Grade"<<": B+"<<endl;
                cout<<setw(15)<<"Perfomance"<<": Good"<<endl;
            }
            else if (percentage>=50){
                cout<<setw(15)<<"Grade"<<": B"<<endl;
                cout<<setw(15)<<"Perfomance"<<": Satisfactory"<<endl;
            }
            else if (percentage>=40){
                cout<<setw(15)<<"Grade"<<": C"<<endl;
                cout<<setw(15)<<"Perfomance"<<": Needs Improvement"<<endl;
            }
            else if (percentage<40){
                cout<<setw(15)<<"Grade"<<": F"<<endl;
                cout<<setw(15)<<"Perfomance"<<": Failed"<<endl;
            }
            cout<<"\n\n";
            goto m;
        }
    case 5:
        cout<<"Thank You...";
        exit(0);
    default:
        cout<<"\nInvalid Choice!\n\n";
        goto m;
    }


}

