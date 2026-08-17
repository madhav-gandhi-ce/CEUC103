// Practical 6.2
// To search and get ranking of the participants.
// Last Updated : 17th August, 2026 at 16:07.

#include <iostream>
#include <iomanip>
using namespace std;
int main(){

    int num_part, i, j, total_score=0, lowest_score, highest_score;
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
    int asc_score[num_part];
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
    //cout<<endl;
    cout<<endl;
    cout<<"--------------------------------------\n";
    cout<<"         Ranking List\n";
    cout<<"--------------------------------------\n\n";
    cout<<left<<setw(5)<<"Rank";
    cout<<setw(6)<<"Name";
    cout<<setw(6)<<"Score";
    cout<<endl;
    for (i=0; i<num_part; i++){
        for (j=0; j<num_part-i; j++){
            int temp;
            if (score[j]<score[j+1]){
                temp = score[j];
                score[j] = score[j+1];
                score[j+1] = temp;
            }

        }
        asc_score[i] = score[j-1];
    }
    for (i=0; i<num_part; i++){
        cout<<left<<setw(5)<<i+1;
        cout<<setw(6)<<part_name[i];
        cout<<setw(6)<<asc_score[i];
        cout<<endl;
    }
    cout<<"--------------------------------------\n\n";
    cout<<"Top Three Performers\n";
    for (i=0; i<3; i++){
        cout<<i+1<<". "<<part_name[i]<<" "<<asc_score[i]<<endl;
    }



}




