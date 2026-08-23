// Practical 6.3
// To update, delete, edit student details.
// Last Updated : 24th August, 2026 at 00:26.

#include <iostream>
#include <iomanip>
int main(){
    using namespace std;
    int num_stu, position, num_stu_temp, i;
    string id[10], name[10], grade[10], id_temp, updated_grade;
    float percentage[10], updated_percentage;
    int sem_num, total=0, choice, num_sub, marks;
    long long con_num;
    bool flag_std=true;
    bool flag_mark=true;
    bool menu=false;
    char reg_another_stu;

    cout<<"************************************************\n";
    cout<<"     STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"************************************************\n\n";

    cout<<"Enter Number Of Students : ";
    cin>>num_stu;

    cout<<"Enter Student Details\n\n";
    for (int i=0; i<num_stu; i++){
        cout<<left<<setw(20)<<"Enter Enrollment ID"<<": ";
        cin>>id[i];
        cout<<setw(20)<<"Enter Your Name"<<": ";
        cin.ignore();
        getline(cin, name[i]);
        cout<<setw(20)<<"Enter Percentage"<<": ";
        cin>>percentage[i];
        cout<<setw(20)<<"Enter Grade"<<": ";
        cin>>grade[i];
        cout<<endl;
    }

    cout<<"\n------------------------------------------------\n";
    cout<<"Current Student Records\n\n";
    for (int i=0; i<num_stu; i++){
        cout<<setw(10)<<id[i];
        cout<<setw(15)<<name[i];
        cout<<setw(6)<<percentage[i];
        cout<<grade[i];
        cout<<endl;
    }
    cout<<"\n------------------------------------------------\n\n";




    m : cout<<"-------------------MAIN MENU--------------------\n\n\n";

    cout<<"1. Insert New Student\n2. Update Student Records\n3. Delete Student Record\n4. Exit\n\n";

    cout<<"Enter Your Choice : ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        cout<<"Enter Position : ";
        cin>>position;
        num_stu_temp = num_stu;
        position--;
        for (int i = num_stu; i > position; i--) {
            id[i] = id[i - 1];
            name[i] = name[i - 1];
            grade[i] = grade[i - 1];
            percentage[i] = percentage[i - 1];
        }

        cout<<left<<setw(20)<<"Enter Enrollment ID"<<": ";
        cin>>id[position];
        cout<<setw(20)<<"Enter Your Name"<<": ";
        cin.ignore();
        getline(cin, name[position]);
        cout<<setw(20)<<"Enter Percentage"<<": ";
        cin>>percentage[position];
        cout<<setw(20)<<"Enter Grade"<<": ";
        cin>>grade[position];
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
            if (id[i]==id_temp){
                break;
            }
        }
        cout<<"Enter New Percentage : ";
        cin>>updated_percentage;
        percentage[i] = updated_percentage;
        cout<<"Enter New Grade : ";
        cin>>updated_grade;
        grade[i] = updated_grade;

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
        cout << "\nDelete Student Record\n\n";

        cout << "Enter Position : ";
        cin >> position;

        // Convert position to array index
        position--;

        // Shift all records after deleted record one position to the left
        for (int i = position; i < num_stu - 1; i++) {
            id[i] = id[i + 1];
            name[i] = name[i + 1];
            grade[i] = grade[i + 1];
            percentage[i] = percentage[i + 1];
        }

        // Decrease number of students
        num_stu--;

        cout << endl;
        cout << "Record Deleted Successfully.";
        cout << endl;

        cout << "\n------------------------------------------------\n";
        cout << "Final Student Records\n\n";

        for (int i = 0; i < num_stu; i++) {
            cout << setw(10) << id[i];
            cout << setw(15) << name[i];
            cout << setw(6) << percentage[i];
            cout << grade[i];
            cout << endl;
        }

        cout << "\n------------------------------------------------\n\n";

        goto m;

    // case 3:
    //     cout<<"\nDelete Student Record\n\n";
    //     cout<<"Enter Position : ";
    //     cin>>position;
    //     num_stu_temp = num_stu;
    //     for (int i=position-1; i<num_stu, num_stu_temp>position-1; i++, num_stu_temp--){
    //         id[num_stu_temp-2] = id[num_stu_temp-1];
    //         name[num_stu_temp-2] = name[num_stu_temp-1];
    //         grade[num_stu_temp-2] = grade[num_stu_temp-1];
    //         percentage[num_stu_temp-2] = percentage[num_stu_temp-1];
    //     }

    //     cout<<endl;
    //     cout<<endl;
    //     cout<<"Record Deleted Successfully.";
        
    //     cout<<endl;
    //     cout<<"\n------------------------------------------------\n";
    //     cout<<"Final Student Records\n\n";
    //     for (int i=0; i<num_stu; i++){
    //         cout<<setw(10)<<id[i];
    //         cout<<setw(15)<<name[i];
    //         cout<<setw(6)<<percentage[i];
    //         cout<<grade[i];
    //         cout<<endl;
    //     }
    //     cout<<"\n------------------------------------------------\n\n";
    //     goto m;

    case 4:
        cout<<"Thank You...";
        exit(0);
    default:
        cout<<"\nInvalid Choice!\n\n";
        goto m;
    }


}
