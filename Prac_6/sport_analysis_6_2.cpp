// Practical 6.2
// To search and get ranking of the participants.
// Last Updated : 3rd September, 2026 at 21:30.

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int num_part, i, total_score=0, lowest_score, highest_score, j, temp;
    string temp1;
    bool found=false;
    int score[20];
    string part_name[70], part_id[10], id;
    cout<<"********************************************\n";
    cout<<"     SPORTS EVENT SCORE ANALYSIS\n";
    cout<<"********************************************\n\n";

    m : cout<<left<<setw(29)<<"Enter Number of Participants"<<": ";
    cin>>num_part;
    cout<<endl;
    if (num_part <= 0) {
        cout << "Number of participants must be greater than 0.";
        goto m;
    }


    for (i=0; i<num_part; i++){
        cout<<left<<setw(29)<<"Enter Participant ID"<<": ";
        cin>>part_id[i];
        cout<<setw(29)<<"Enter Participant Name"<<": ";
        cin>>part_name[i];
        cout<<setw(29)<<"Enter Score"<<": ";
        cin>>score[i];
        total_score += score[i];
        cout<<endl;
    }

    cout<<"Search Participant";
    n : cout<<"\nEnter Participant ID : ";
    cin>>id;
    cout<<endl;
    for (i=0; i<num_part; i++){
        if (id == part_id[i]){
            cout<<"--------------------------------------\n";
            cout<<"         Participant Found\n";
            cout<<"--------------------------------------\n\n";
            cout<<left<<setw(6)<<"ID"<<" : "<<part_id[i];
            cout<<endl;
            cout<<setw(6)<<"Name"<<" : "<<part_name[i];
            cout<<endl;
            cout<<setw(6)<<"Score"<<" : "<<score[i];
            cout<<endl;
            found=true;
            }
    }
    if (found==false){
        cout<<"Participant ID not found!\n";
        goto n;
    }


    cout<<endl;
    cout<<"--------------------------------------\n";
    cout<<"         Ranking List\n";
    cout<<"--------------------------------------\n\n";
    cout<<left<<setw(5)<<"Rank";
    cout<<setw(6)<<"Name";
    cout<<setw(6)<<"Score";
    cout<<endl;
    for (i=0; i<num_part-1; i++){
        for (j=0; j<num_part-i-1; j++){
            if (score[j]<score[j+1]){
                temp = score[j];
                score[j] = score[j+1];
                score[j+1] = temp;
                temp1 = part_name[j];
                part_name[j] = part_name[j+1];
                part_name[j+1] = temp1;
            }
        }
    }
    for (i=0; i<num_part; i++){
        cout<<left<<setw(3)<<i+1;
        cout<<setw(6)<<part_name[i];
        cout<<setw(6)<<score[i];
        cout<<endl;
    }
    cout<<"\n--------------------------------------\n\n";
    cout<<"Top Performers\n";
    if (num_part<3){
        for (i=0; i<num_part; i++){
        cout<<i+1<<". "<<left<<setw(6)<<part_name[i];
        cout<<" - ";
        cout<<score[i]<<endl;
        }
    }
    else{
        for (i=0; i<3; i++){
            cout<<i+1<<". "<<left<<setw(6)<<part_name[i];
            cout<<" - ";
            cout<<score[i]<<endl;
        }
    }

}



