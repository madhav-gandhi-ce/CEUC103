// Practical 6.1
// To display score of participants.
// Last Updated : 23rd October, 2026 at 11:06.

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    short int i, num_part, total_score=0, lowest, highest;
    float avg_score;
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
    char id[num_part][5], name[num_part][20];
    
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

        total_score += score[i];

        cin.ignore();
        cout<<endl;

    }

    cout<<"\n----------------------------------------------\n";
    cout<<"Participant Perfomance\n";
    cout<<"----------------------------------------------\n\n";
    
    cout<<setw(5)<<"  ID";
    cout<<setw(10)<<"   Name";
    cout<<setw(6)<<" Score";
    cout<<"\n----------------------------------------------\n";
    for (i=0; i<num_part; i++){
        cout<<" "<<left<<setw(5)<<id[i];
        cout<<"  "<<setw(10)<<name[i];
        cout<<setw(6)<<score[i]<<endl;
    }
    cout<<"\n----------------------------------------------\n\n";

    avg_score = (float)total_score/num_part;
    cout<<left<<setw(14)<<"Total Score"<<" : "<<total_score<<endl;
    cout<<setw(14)<<"Average Score"<<" : "<<fixed<<setprecision(2)<<avg_score<<endl;

    lowest = score[0];
    highest = score[0];
    for (i=0; i<num_part; i++){
        if (lowest>score[i]){
            lowest = score[i];
        }
        if (highest<score[i]){
            highest = score[i];
        }
    }
    cout<<setw(14)<<"Highest Score"<<" : "<<highest<<endl;
    cout<<setw(14)<<"Lowest Score"<<" : "<<lowest<<endl;
}
