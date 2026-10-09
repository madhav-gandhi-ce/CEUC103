// Practical 6.3
// To update, delete, edit student details.
// Last Updated : 7th September, 2026 at 07:33.

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
int main(){
    using namespace std;
    int num_stu, position, i, j;
    char id[10][10], name[10][20], grade[10][3], id_temp[20];
    float percentage[10], updated_percentage;
    int choice;

    cout<<"************************************************\n";
    cout<<"     STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"************************************************\n\n";

    n_s : cout<<"Enter Number Of Students : ";
    cin>>num_stu;
    if (num_stu < 1 || num_stu > 10){
    cout<<"Number of students must be between 1 and 10.\n";
    goto n_s;
    }

    cout<<"\nEnter Student Details\n\n";
    for (int i=0; i<num_stu; i++){
        cout<<left<<setw(20)<<"Enter Enrollment ID"<<": ";
        cin>>id[i];

        cout<<setw(20)<<"Enter Your Name"<<": ";
        cin.ignore();
        cin.getline(name[i], 20);

        cout<<setw(20)<<"Enter Percentage"<<": ";
        cin>>percentage[i];

        if (percentage[i]>=90){
            grade[i][0] = 'O';
            grade[i][1] = '\0';
        }
        else if (percentage[i]>=80){
            grade[i][0] = 'A';
            grade[i][1] = '+';
            grade[i][2] = '\0';
        }
        else if (percentage[i]>=70){
            grade[i][0] = 'A';
            grade[i][1] = '\0';
        }
        else if (percentage[i]>=60){
            grade[i][0] = 'B'; 
            grade[i][1] = '+'; 
            grade[i][2] = '\0';
        }
        else if (percentage[i]>=50){
           grade[i][0] = 'B';
           grade[i][1] = '\0';
        }
        else if (percentage[i]>=40){
            grade[i][0] = 'C';
            grade[i][1] = '\0';
        }
        else if (percentage[i]<40){
            grade[i][0] = 'F'; 
            grade[i][1] = '\0';
        }
        // cout<<setw(20)<<"Enter Grade"<<": ";
        // cin>>grade[i];
        cout<<endl;
    }

    cout<<"\n------------------------------------------------\n";
    cout<<"Current Student Records\n\n";
    for (int i=0; i<num_stu; i++){
        cout<<setw(10)<<id[i];
        cout<<setw(15)<<name[i];
        cout<<setw(4)<<percentage[i];
        cout<<grade[i];
        cout<<endl;
    }
    cout<<"\n------------------------------------------------\n\n";

    m : cout<<"---------------------MENU----------------------\n\n\n";

    cout<<"1. Insert New Student\n2. Update Student Records\n3. Delete Student Record\n4. Exit\n\n";

    cout<<"Enter Your Choice : ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        p1 : cout<<"Enter Position : ";
        cin>>position;
        if (position < 1 || position > num_stu + 1){
            cout<<"Invalid Position!\n";
            goto p1;
        }
        position--;
        for (int i = num_stu; i > position; i--) {
            for (j=0; j<10; j++){ 
                id[i][j] = id[i-1][j]; 
            } 
            for (j=0; j<20; j++){
                name[i][j] = name[i-1][j]; 
            } 
            for (j=0; j<3; j++){ 
                grade[i][j] = grade[i-1][j]; 
            } 
            percentage[i] = percentage[i-1];
        }

        cout<<left<<setw(20)<<"Enter Enrollment ID"<<": ";
        cin>>id[position];

        cout<<setw(20)<<"Enter Your Name"<<": ";
        cin.ignore();
        cin.getline(name[position], 20);

        cout<<setw(20)<<"Enter Percentage"<<": ";
        cin>>percentage[position];

        // cout<<setw(20)<<"Enter Grade"<<": ";
        if (percentage[position]>=90){
            grade[position][0] = 'O';
            grade[position][1] = '\0';
        }
        else if (percentage[position]>=80){
            grade[position][0] = 'A';
            grade[position][1] = '+';
            grade[position][2] = '\0';
        }
        else if (percentage[position]>=70){
            grade[position][0] = 'A';
            grade[position][1] = '\0';
        }
        else if (percentage[position]>=60){
            grade[position][0] = 'B'; 
            grade[position][1] = '+'; 
            grade[position][2] = '\0';
        }
        else if (percentage[position]>=50){
           grade[position][0] = 'B';
           grade[position][1] = '\0';
        }
        else if (percentage[position]>=40){
            grade[position][0] = 'C';
            grade[position][1] = '\0';
        }
        else if (percentage[position]<40){
            grade[position][0] = 'F'; 
            grade[position][1] = '\0';
        }
        // cout<<setw(20)<<"Enter Grade"<<": ";
        // cin>>grade[i];
        cout<<endl;
    }
        num_stu++;
        cout<<endl;
        cout<<endl;
        cout<<"Record Inserted Successfully.";
        
        cout<<endl;
        cout<<"\n------------------------------------------------\n";
        cout<<"Updated Student Record\n\n";
        for (int i=0; i<num_stu; i++){
            cout<<setw(10)<<id[i];
            cout<<setw(15)<<name[i];
            cout<<setw(6)<<percentage[i];
            cout<<grade[i];
            cout<<endl;
        }
        cout<<"\n------------------------------------------------\n\n";
        goto m;

    case 2:
        cout<<"\n\n------------------------------------------------\n";
        cout<<"Update Student Record\n\n";
        cout<<"Enter Enrollment Number : ";
        cin>>id_temp;
        for (i=0; i<num_stu; i++){
            bool same=true;
            for (j=0; id_temp[j]!='\0' || id[i][j]!='\0'; j++){
                if (id_temp[j] != id[i][j]){
                    same = false;
                    break;
                }
            }
            if (same==true){
                break;
            }

        }
        cout<<"Enter New Percentage : ";
        cin>>updated_percentage;
        percentage[i] = updated_percentage;
        // cout<<"Enter New Grade : ";
        // cin>>updated_grade;
        
        // grade[i] = updated_grade;
        if (percentage[position]>=90){
            grade[i][0] = 'O';
            grade[i][1] = '\0';
        }
        else if (percentage[position]>=80){
            grade[i][0] = 'A';
            grade[i][1] = '+';
            grade[i][2] = '\0';
        }
        else if (percentage[position]>=70){
            grade[i][0] = 'A';
            grade[i][1] = '\0';
        }
        else if (percentage[position]>=60){
            grade[i][0] = 'B'; 
            grade[i][1] = '+'; 
            grade[i][2] = '\0';
        }
        else if (percentage[position]>=50){
           grade[i][0] = 'B';
           grade[i][1] = '\0';
        }
        else if (percentage[position]>=40){
            grade[i][0] = 'C';
            grade[i][1] = '\0';
        }
        else if (percentage[position]<40){
            grade[i][0] = 'F'; 
            grade[i][1] = '\0';
        }
        // cout<<setw(20)<<"Enter Grade"<<": ";
        // cin>>grade[i];
        cout<<endl;

        cout<<endl;
        cout<<endl;
        cout<<"Record Updated Successfully.";
        
        cout<<endl;
        cout<<"\n------------------------------------------------\n";
        cout<<"Updated Student Record\n\n";
        for (int i=0; i<num_stu; i++){
            cout<<setw(10)<<id[i];
            cout<<setw(15)<<name[i];
            cout<<setw(6)<<percentage[i];
            cout<<grade[i];
            cout<<endl;
        }
        cout<<"\n------------------------------------------------\n\n";
        goto m;
    


    case 3:
        cout<<"\nDelete Student Record";

        p2 : cout<<"\n\nEnter Position : ";
        cin>>position;
        if (position < 1 || position > num_stu){
            cout<<"Invalid Position!\n";
            goto p2;
        }
        position--;
        for (int i = position; i < num_stu - 1; i++) {
            for (j=0; j<10; j++){ 
                id[i][j] = id[i+1][j]; 
            } 
            for (j=0; j<20; j++){ 
                name[i][j] = name[i+1][j]; 
            } 
            for (j=0; j<3; j++){ 
                grade[i][j] = grade[i+1][j]; 
            } 
            percentage[i] = percentage[i+1];
        }
        num_stu--;

        cout<<endl;
        cout<<"Record Deleted Successfully.";
        cout<<endl;

        cout<<"\n------------------------------------------------\n";
        cout<<"Final Student Records\n\n";

        for (int i = 0; i < num_stu; i++) {
            cout<<setw(10)<<id[i];
            cout<<setw(15)<<name[i];
            cout<<setw(6)<<percentage[i];
            cout<<grade[i];
            cout<<endl;
        }

        cout<<"\n------------------------------------------------\n\n";

        goto m;

    case 4:
        cout<<"Thank You...";
        exit(0);
    default:
        cout<<"\nInvalid Choice!\n\n";
        goto m;
    


}




