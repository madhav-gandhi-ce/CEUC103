// Practical 6.2
// To search and get ranking of the participants.
// Last Updated : 21th August, 2026 at 15:58.

#include <iostream>
#include <iomanip>
using namespace std;
int main(){

    int num_part, i, j, total_score=0;
    int temp;
    string temp1;
    int score[10];
    string part_name[15], part_id[10], id;

    cout<<"********************************************\n";
    cout<<"     SPORTS EVENT SCORE ANALYSIS\n";
    cout<<"********************************************\n\n";

    m : cout<<left<<setw(29)<<"Enter Number of Participants"<<": ";
    cin>>num_part;
    cout<<endl;
    if (num_part <= 0) {
        cout << "Number of participants must be greater than 0.\n\n";
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
        cout<<left<<setw(5)<<i+1;
        cout<<setw(6)<<part_name[i+1];
        cout<<setw(6)<<score[i+1];
        cout<<endl;
    }
    cout<<"--------------------------------------\n\n";
    cout<<"Top Three Performers\n";
    if (num_part<3){
        for (i=0; i<num_part; i++){
        cout<<i+1<<". "<<left<<setw(6)<<part_name[i+1];
        cout<<" - ";
        cout<<score[i+1]<<endl;
        }
    }
    else{
        for (i=0; i<3; i++){
            cout<<i+1<<". "<<left<<setw(6)<<part_name[i+1];
            cout<<" - ";
            cout<<score[i+1]<<endl;
        }
    }
}






