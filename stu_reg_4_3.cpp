// Practical 4.3
// To add a menu option
// Last Updated : 10th August, 2026 at 3:07pm
#include <iostream>
#include <iomanip>
int main(){
    using namespace std;
    string id, name, branch;
    int sem_num, math, phy, prog_foun, total, choice;
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
        cout<<"\n------------------------------------------------\n";
        cout<<"Enter Student Marks\n";
        cout<<"------------------------------------------------\n\n"<<endl;

        w : cout<<left<<setw(35)<<"Enter Mathematics Marks"<<": ";
        cin>>math;
        if (math<0 || math>100){
            cout<<"Invalid Marks !\n\n";
            goto w;
        }
        else{
            flag_mark=false;
        }
        e : cout<<setw(35)<<"Enter Physics Marks"<<": ";
        cin>>phy;
        if (phy<0 || phy>100){
            cout<<"Invalid Marks !\n\n";
            goto e;
        }
        else{
            flag_mark=false;
        }
        r : cout<<setw(35)<<"Enter Programming Foundation Marks"<<": ";
        cin>>prog_foun;
        if (prog_foun<0 || prog_foun>100){
            cout<<"\nInvalid Marks !\n\n";
            goto r;
        }
        else{
            flag_mark=false;
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
            total=math+phy+prog_foun;
            avg=((float)phy+math+prog_foun)/3;
            percentage=((float)phy+math+prog_foun)/3;
            cout<<"\n\n------------------------------------------------\n";
            cout<<"Academic Result\n";
            cout<<"------------------------------------------------\n\n"<<endl;

            cout<<setw(15)<<"Total Marks"<<": "<<total<<endl;
            cout<<setw(15)<<"Average Marks"<<": "<<fixed<<setprecision(2)<<avg<<endl;
            cout<<setw(15)<<"Percentage"<<": "<<fixed<<setprecision(2)<<percentage<<"%"<<endl<<endl;


            if (percentage>40){
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
