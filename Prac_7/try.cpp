#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    char id[8], name[16], keyword[16], branch[24], reference_id[25], first_name[16], last_name[10];
    short int i, j, count=0, k=0;
    bool flag=true;

    cout<<"********************************************"<<endl;
    cout<<"      STUDENT RECORD MANAGEMENT SYSTEM      "<<endl;
    cout<<"********************************************"<<endl;

    cout<<left<<setw(30)<<"Enter Enrollment Number"<<": ";
    cin>>id;

    cout<<left<<setw(30)<<"Enter Student Name"<<": ";
    cin.ignore();
    cin.getline(name,16);

    // cout<<left<<setw(30)<<"Enter Branch"<<": ";
    // cin.getline(branch,24);

    cout<<endl;

    cout<<"--------------------------------------------"<<endl<<endl;
    cout<<"Student Reference"<<endl;

    cout<<"Enter Keyword : ";
    cin.getline(keyword,16);

    for (count=0; keyword[count]!='\0'; count++){

    }

    for (i=0; name[i]!='\0'; i++){
        if (name[i] == keyword[0]){
            break;
        }
    }
    cout<<i<<endl;
    cout<<count<<endl;

    for (j=0; keyword[j]!='\0'; j++){
        if (name[i] == keyword[j]){
           k++; 
        }
        i++;
    }
    cout<<endl;
    cout<<k<<endl;
    if (flag==true){
        if (count==k){
            cout<<"Keyword found!\n";
        }
        else{
        cout<<"Keyword not found\n";
        }
    }
    else{
        cout<<"Keyword not found\n";
    }
    // for(j=0;keyword[j]!='\0';j++)
    // {
    //     for(i=0;name[i]!='\0';i++)
    //     {
    //         if(keyword[j]==name[i])
    //         {
    //             break;
    //         }
    //     }
    // }



    cout<<"--------------------------------------------"<<endl;





    // for(i=0;name[i]!='\0';i++)
    // {
    //     reference_id[i]=name[i];
    // }

    // reference_id[i]='-';

    // for(i=i+1,j=0;id[j]!='\0';i++,j++)
    // {
    //     reference_id[i]=id[j];
    // }
    // reference_id[i]='\0';

    // cout<<reference_id<<endl;

    // cout<<"--------------------------------------------"<<endl<<endl;

    // for(i=0; name[i]!=' ' && name[i]!='\0';i++)
    // {
    //     first_name[i]=name[i];
    // }

    // first_name[i]='\0';

    // cout<<"First Name"<<endl;
    // cout<<first_name<<endl;

    // if(name[i]==' ')
    // {
    //     for(i++, j=0;name[i]!='\0';j++, i++)
    //     {
    //         last_name[j]=name[i];
    //     }

    //     cout<<"Last Name"<<endl;
    //     cout<<last_name<<endl;

    // }



}
