// Practical 6.3
// To update, delete, edit student details.
// Last Updated : 29th October, 2026 at 01:21.

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    short int i, pos, j, n, ch;
    cout<<"************************************************\n";
    cout<<"\tSTUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"************************************************\n";

    cout<<"Enter Number of Students : ";
    cin>>n;
    char id[100][8], name[100][10], grade[100][3], id_search[1][8];
    float per[100];
    bool found=false;

    cout<<"\n\nEnter Student Details\n\n";
    cin.ignore();
    for (i=0; i<n; i++){
        cout<<left<<setw(20)<<"Enter Enrollment ID"<<" : ";
        cin.getline(id[i], 8);
        cout<<setw(20)<<"Enter Name"<<" : ";
        cin.getline(name[i], 10);
        cout<<setw(20)<<"Enter Percentage"<<" : ";
        cin>>per[i];

        if (per[i]>=90){
            grade[i][0] = 'O';
            grade[i][1] = '\0';
        }
        else if (per[i]>=80){
            grade[i][0] = 'A';
            grade[i][1] = '+';
            grade[i][2] = '\0';
        }
        else if (per[i]>=70){
            grade[i][0] = 'A';
            grade[i][1] = '\0';
        }
        else if (per[i]>=60){
            grade[i][0] = 'B';
            grade[i][1] = '+';
            grade[i][2] = '\0';
        }
        else if (per[i]>=50){
            grade[i][0] = 'B';
            grade[i][1] = '\0';
        }
        else if (per[i]>=40){
            grade[i][0] = 'C';
            grade[i][1] = '\0';
        }
        else {
            grade[i][0] = 'F';
            grade[i][1] = '\0';
        }

        cout<<endl;
        cin.ignore();
    }
    cout<<"\n\n--------------------------------------------\n";
    cout<<"Current Student Records\n\n";
    for (i=0; i<n; i++){
        cout<<left<<setw(10)<<id[i]<<setw(12)<<name[i]<<setw(5)<<per[i]<<setw(3)<<grade[i]<<endl;
    }
    cout<<"\n\n--------------------------------------------\n";
    
    m : cout<<"1. Insert New Student\n2. Update Student Details\n3. Delete Student Record\n4. Exit\n\n";
    cout<<"Enter your choice : ";
    cin>>ch;
    switch(ch){
        case 1:
            n++;                        
            cout<<"\nEnter position : ";
            cin>>pos;
            cout<<endl;

            for (i=n-1; i>=pos; i--){
                for(j=0; j<8; j++){
                    id[i][j] = id[i-1][j];
                }
                for(j=0; j<10; j++){
                    name[i][j] = name[i-1][j];
                }
                for(j=0; j<3; j++){
                    grade[i][j] = grade[i-1][j];
                }
                per[i] = per[i-1];
            }
            cout<<endl;
            cin.ignore();
            cout<<left<<setw(20)<<"Enter Enrollment ID"<<" : ";
            cin.getline(id[pos-1], 8);
            cout<<setw(20)<<"Enter Name"<<" : ";
            cin.getline(name[pos-1], 10);
            cout<<setw(20)<<"Enter Percentage"<<" : ";
            cin>>per[pos-1];
            cin.ignore();
            
            if (per[pos-1]>=90){
                grade[pos-1][0] = 'O';
                grade[pos-1][1] = '\0';
            }
            else if (per[pos-1]>=80){
                grade[pos-1][0] = 'A';
                grade[pos-1][1] = '+';
                grade[pos-1][2] = '\0';
            }
            else if (per[pos-1]>=70){
                grade[pos-1][0] = 'A';
                grade[pos-1][1] = '\0';
            }
            else if (per[pos-1]>=60){
                grade[pos-1][0] = 'B';
                grade[pos-1][1] = '+';
                grade[pos-1][2] = '\0';
            }
            else if (per[pos-1]>=50){
                grade[pos-1][0] = 'B';
                grade[pos-1][1] = '\0';
            }
            else if (per[pos-1]>=40){
                grade[pos-1][0] = 'C';
                grade[pos-1][1] = '\0';
            }
            else {
                grade[pos-1][0] = 'F';
                grade[pos-1][1] = '\0';
            }

            for (i=0; i<n; i++){            
                cout<<id[i]<<" ";
            }
            cout<<endl<<endl;
            cout<<"\nRecord Inserted Successfully.\n\n";

            cout<<"\n\n--------------------------------------------\n";
            cout<<"Updated Student Records\n\n";
            for (i=0; i<n; i++){
                cout<<left<<setw(10)<<id[i]<<setw(12)<<name[i]<<setw(5)<<per[i]<<setw(3)<<grade[i]<<endl;
            }
            cout<<"\n\n--------------------------------------------\n";
            goto m;

        case 2 :
            n : cout<<"\nEnter Enrollment ID : ";
            cin.ignore();
            cin.getline(id_search[0], 8);

            for (i=0; i<n; i++){
                for (j=0; j<7; j++){
                    if (id[i][j] != id_search[0][j]){
                        break;
                    }
                    else {
                        if (j==6){
                            j=i;
                            i=n;
                            found = true;
                            break;
                        }
                    }
                }
            }   
            
            if (found==false) {
                cout<<"\nEnrollment ID not found!\n";
                goto n;
            }
            else {
                cout<<"\nEnter New Percentage : ";
                cin>>per[j];

                if (per[j]>=90){
                    grade[j][0] = 'O';
                    grade[j][1] = '\0';
                }
                else if (per[j]>=80){
                    grade[j][0] = 'A';
                    grade[j][1] = '+';
                    grade[j][2] = '\0';
                }
                else if (per[j]>=70){
                    grade[j][0] = 'A';
                    grade[j][1] = '\0';
                }
                else if (per[j]>=60){
                    grade[j][0] = 'B';
                    grade[j][1] = '+';
                    grade[j][2] = '\0';
                }
                else if (per[j]>=50){
                    grade[j][0] = 'B';
                    grade[j][1] = '\0';
                }
                else if (per[j]>=40){
                    grade[j][0] = 'C';
                    grade[j][1] = '\0';
                }
                else {
                    grade[j][0] = 'F';
                    grade[j][1] = '\0';
                }
            }
            cout<<"\nRecord Updated Successfully.\n\n";
            cout<<"\n\n--------------------------------------------\n";
            cout<<"Updated Student Records\n\n";
            for (i=0; i<n; i++){
                cout<<left<<setw(10)<<id[i]<<setw(12)<<name[i]<<setw(5)<<per[i]<<setw(3)<<grade[i]<<endl;
            }
            cout<<endl;
            goto m;
        case 3 :
            cout<<"Enter position : ";
            cin>>pos;
            cout<<endl<<endl;

            for (i=pos-1; i<n-1; i++){
                for (j=0; j<8; j++){
                    id[i][j] = id[i+1][j];
                }
                for (j=0; j<10; j++){
                    name[i][j] = name[i+1][j];
                }
                for (j=0; j<3; j++){
                    grade[i][j] = grade[i+1][j];
                }
                per[i] = per[i+1];
            }
            n--;
            cout<<"\nRecord Deleted Successfully.\n\n";

            cout<<"\n\n--------------------------------------------\n";
            cout<<"Updated Student Records\n\n";
            for (i=0; i<n; i++){
                cout<<left<<setw(10)<<id[i]<<setw(12)<<name[i]<<setw(5)<<per[i]<<setw(3)<<grade[i]<<endl;
            }
            cout<<endl;
            goto m;

        case 4 :
            cout<<"\nThank You!\n";
            return 0;
        }
}
