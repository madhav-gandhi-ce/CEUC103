// Practical 7.1
// Use strings
//Last updated on 7th September, 2026

#include <iostream>
#include <cstring>
#include <string.h>
#include <iomanip>
using namespace std;

int main()
{
    char id[8], name[15], branch[23], reference_id[24], first_name[15], last_name[15], keyword[15];
    int i, j;
    bool flag=true;

    cout<<"********************************************\n";
    cout<<"\tSTUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"********************************************\n\n";

    cout<<left<<setw(23)<<"Enter Enrollment Number"<<" : ";
    cin>>id;

    cout<<setw(23)<<"Enter Student Name"<<" : ";
    cin.ignore();
    cin.getline(name,15);
    /*
    Or
    cin>>ws;
    cin.getline(name,15);
    */


    cout<<setw(23)<<"Enter Branch"<<" : ";
    cin.getline(branch,23);

    cout<<id;
    cout<<endl;

    cout<<name;
    cout<<endl;

    cout<<branch;
    cout<<endl;

    for (i=0; name[i]!='\0'; i++){
    }
    cout<<"\n--------------------------------------------\n\n";
    cout<<"Student Reference\n\n";
    strcpy(reference_id, name);
    reference_id[i] = '-';
    i++;
    for (j=0; id[j]!='\0'; j++){
        reference_id[i] = id[j];
        i++;
    }
    cout<<reference_id;

    for (i=0; name[i]!=' '; i++){
    first_name[i] = name[i];
    }
    i++;

    for (j=0; name[j]!='\0'; j++){
        last_name[j] = name[i];
        i++;
    }
    cout<<endl;
    cout<<"First name : "<<first_name;
    cout<<endl;
    cout<<"Last name : "<<last_name;
    cout<<endl;

    cout<<"Enter Keyword : ";
    cin>>keyword;

    if (strstr(name, keyword) == nullptr ){
        cout<<"\nKeyword not found\n";
    }
    else{
        cout<<"\nKeyword found\n";
    }

    cout<<"Student Report\n\n";

    cout<<"Enrollment Number"<<" : "<<id;
    cout<<endl;

    cout<<"Student Name"<<" : "<<name;
    cout<<endl;

    cout<<"Branch"<<" : "<<branch;
    cout<<endl;

}
