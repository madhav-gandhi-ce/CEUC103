
#include <iostream>
#include <iomanip>

int main(){
    using namespace std;
    string id, name, branch;
    int sem_num, math, phy, prog_foun, total;
    float avg, percentage;
    long long con_num;

    cout<<"************************************************\n";
    cout<<"     STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"************************************************\n"<<endl;


    cout<<"Software Version : 1.2\n\n";

    cout<<"------------------------------------------------\n";
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
    cout<<"\n\n";



    cout<<"------------------------------------------------\n";
    cout<<"Academic Information\n";
    cout<<"------------------------------------------------\n\n"<<endl;

    cout<<left<<setw(35)<<"Enter Mathematics Marks"<<": ";
    cin>>math;
    cout<<setw(35)<<"Enter Physics Marks"<<": ";
    cin>>phy;
    cout<<setw(35)<<"Enter Programming Foundation Marks"<<": ";
    cin>>prog_foun;
    total=math+phy+prog_foun;
    avg=((float)phy+math+prog_foun)/3;
    percentage=((float)phy+math+prog_foun)/3;
    cout<<"\n\n";


    cout<<"------------------------------------------------\n";
    cout<<"Academic Summary\n";
    cout<<"------------------------------------------------\n\n"<<endl;

    cout<<setw(15)<<"Total Marks"<<": "<<total<<endl;
    cout<<setw(15)<<"Average Marks"<<": "<<fixed<<setprecision(2)<<avg<<endl;
    cout<<setw(15)<<"Percentage"<<": "<<fixed<<setprecision(2)<<percentage<<"%"<<endl<<endl<<endl;

    cout<<"------------------------------------------------\n";
    cout<<"Academic Result\n";
    cout<<"------------------------------------------------\n\n"<<endl;

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



    cout<<"\n\n------------------------------------------------\n";
    cout<<"Student Information\n";
    cout<<"------------------------------------------------\n\n"<<endl;



    cout << setw(15) <<"Enrollment ID"<<": "<<id<<endl;
    cout << setw(15) <<"Name"<<": "<<name<<endl;
    cout << setw(15) <<"Branch"<<": "<<branch<<endl;
    cout << setw(15) <<"Semester"<<": "<<sem_num<<endl;
    cout << setw(15) <<"Contact No."<<": "<<con_num<<endl<<endl;
    cout <<"------------------------------------------------\n";


}
