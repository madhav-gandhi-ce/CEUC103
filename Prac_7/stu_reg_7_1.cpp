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
    bool space_flag=false;

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

    for (i=0; name[i]!='\0'; i++)
    {}

    cout<<"\n--------------------------------------------\n\n";
    cout<<"Student Reference\n\n";

    strcpy(reference_id, name);
    reference_id[i] = '-';

    i++;

    for (j=0; id[j]!='\0'; j++)
    {
        reference_id[i] = id[j];
        i++;
    }
    reference_id[i] = '\0';

    cout<<reference_id;

    cout<<"\n\n--------------------------------------------\n\n";

    for (i=0; name[i]!=' ' && name[i] != '\0'; i++)
    {
        first_name[i] = name[i];
    }
    first_name[i] = '\0';
    
    if (name[i]==' ')
    {
        space_flag=true;
        i++;
    }

    if (space_flag==true)
    {
        for (j=0; name[i]!='\0'; j++)
        {
            last_name[j] = name[i];
            i++;
        }
        last_name[j] = '\0';
    }

    else
    {
        last_name[0] = '\0';
    }


    cout<<endl;
    cout<<left<<setw(11)<<"First name : "<<first_name;
    cout<<endl;
    if (space_flag==true)
    {
        cout<<setw(11)<<"Last name : "<<last_name;
        cout<<endl;
    }
    else
    {
        cout<<setw(11)<<"Last name : "<<"Not available"<<endl;
    }

    cout<<"Enter Keyword : ";
    cin.getline(keyword, 15);

    if (strstr(name, keyword) == nullptr ){
        cout<<"\nKeyword not found\n";
    }
    else{
        cout<<"\nKeyword found\n";
    }

    cout<<"\n\n--------------------------------------------\n\n";

    cout<<"Student Report\n\n";

    cout<<"Enrollment Number"<<" : "<<id;
    cout<<endl;

    cout<<"Student Name"<<" : "<<name;
    cout<<endl;

    cout<<"Branch"<<" : "<<branch;
    cout<<endl;

}
