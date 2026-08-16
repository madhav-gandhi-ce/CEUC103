// Practical 6.2
// To search and get ranking of the participants.
// Last Updated : 16th August, 2026 at 15:37.

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int num_part, i, total_score=0, lowest_score, highest_score;
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

    int score[num_part];
    string part_name[num_part], part_id[num_part], id;

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
            }
    
        }
}

    // lowest_score = score[0];
    // for (i=1; i<num_part; i++){
    //     if (lowest_score>score[i]){
    //         lowest_score = score[i];
    //     }
    // }
    // cout<<left<<setw(14)<<"Lowest Score"<<" : "<<lowest_score;
    // cout<<endl;
    // highest_score = score[0];
    // for (i=1; i<num_part; i++){
    //     if (highest_score<score[i]){
    //         highest_score = score[i];
    //     }
    // }
    // cout<<left<<setw(14)<<"Highest Score"<<" : "<<highest_score;

// }