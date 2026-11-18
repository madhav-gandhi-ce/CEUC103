// Practical 6.2
// To search and get ranking of the participants.
// Last Updated : 23rd October, 2026 at 11:06.

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    short int i, j, k, num_part, temp;
    bool found=true;
    
    cout<<"********************************************\n";
    cout<<"SPORTS EVENT SCORE ANALYSIS\n";
    cout<<"********************************************\n\n";

    // Taking number of participants as input
    n : cout<<"Enter Number of Participants : ";
    cin>>num_part;
    if (num_part<=0){
        cout<<"Number of participants are invalid!\n\n";
        goto n;
    }
    
    short int score[num_part];   
    char id[num_part][5], name[num_part][20], search_id[5];
    
    // Taking Particpant's Info as input
    cin.ignore();
    for (i=0; i<num_part; i++){
        cout<<left<<setw(23)<<"Enter Participant ID"<<" : ";
        cin.getline(id[i], 5);

        cout<<setw(23)<<"Enter Participant Name"<<" : ";
        cin.getline(name[i], 20);

        s : cout<<setw(23)<<"Enter Score"<<" : ";
        cin>>score[i];
        if (score[i]<0 || score[i]>100){
            cout<<"Enter valid score!\n\n";
            goto s;
        }
        cin.ignore();
        cout<<endl;
    }

    cout<<"Search Participant\n";
    cout<<"Enter Participant ID : ";
    cin>>search_id;
    
    for (i=0; i<num_part; i++){
        for (j=0; j<4; j++){
            if (id[i][j]!=search_id[j]){
                j=4;
                found = false;
            }
            else{
                found = true;
                if (j==3){
                    j=i;
                    i=num_part;
                    break;
                }
            }
        }
    }

    if (found == false){
        cout<<"Not found!\n";
    }
    else {
        cout<<"--------------------------------------\n";
        cout<<"\tParticipant Found\n";
        cout<<"--------------------------------------\n\n";
        cout<<left<<setw(6)<<"ID"<<" : "<<id[j]<<endl;
        cout<<setw(6)<<"Name"<<" : "<<name[j]<<endl;
        cout<<setw(6)<<"Score"<<" : "<<score[j]<<endl<<endl;
    }

    char temp_name[20];
    cout<<"\n--------------------------------------\n";
    cout<<"\tRanking List\n";
    cout<<"--------------------------------------\n\n";

    for (i=0; i<num_part; i++){
        for (j=num_part-1; j>i; j--){
            if (score[j-1]<score[j]){
                temp = score[j-1];
                score[j-1] = score[j];
                score[j] = temp;

                for (k=0; k<20; k++){
                    temp_name[k] = name[j-1][k];
                    name[j-1][k] = name[j][k];
                    name[j][k] = temp_name[k];
                }
            }
        }
    }

    cout<<left<<setw(7)<<"Rank";
    cout<<setw(10)<<"Name";
    cout<<setw(6)<<"Score"<<endl;

    for (i=0; i<num_part; i++){
        cout<<" "<<left<<setw(6)<<i+1;
        cout<<setw(10)<<name[i];
        cout<<" "<<setw(6)<<score[i];
        cout<<endl;
    }
    cout<<"--------------------------------------\n\n";
    cout<<"Top Performers\n";
    if (num_part<3){
        for (i=0; i<num_part; i++){
            cout<<i+1<<" "<<name[i]<<" - "<<score[i]<<endl;
        }
    }
    else {
        for (i=0; i<3; i++){
            cout<<i+1<<" "<<name[i]<<" - "<<score[i]<<endl;
        }
    }
    cout<<"\n--------------------------------------";
}
