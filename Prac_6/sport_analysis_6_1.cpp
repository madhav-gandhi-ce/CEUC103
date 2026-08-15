// Practical 6.1
// To display score of participants.
// Last Updated : 15th August, 2026 at 18:31.

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
    if (num_part <= 0) {
        cout << "Number of participants must be greater than 0.";
        goto m;
    }

    int score[num_part];
    string part_name[num_part], part_id[num_part];

    for (i=0; i<num_part; i++){
        cout<<left<<setw(29)<<"Enter Participant ID"<<": ";
        cin>>part_id[i];
        cout<<setw(29)<<"Enter Participant Name"<<": ";
        cin>>part_name[i];
        cout<<setw(29)<<"Enter Score"<<": ";
        cin>>score[i];
        total_score += score[i];
    }

    cout<<endl<<endl;

    cout<<"----------------------------------------------\n";
    cout<<"         Participant Perfomance\n";
    cout<<"----------------------------------------------\n\n";

    
    cout<<left<<setw(6)<<" ID ";
    cout<<setw(11)<<" Name ";
    cout<<setw(3)<<" Score "<<endl;
    cout<<"----------------------------------------------\n";
    for (i=0; i<num_part; i++){
        cout<<left<<setw(6)<<part_id[i]<<" ";
        cout<<setw(11)<<part_name[i]<<" ";
        cout<<setw(3)<<score[i]<<" ";
        cout<<endl;
    }
    cout<<"----------------------------------------------\n\n";


    cout<<left<<setw(14)<<"Total Score"<<" : "<<total_score;
    cout<<endl;
    cout<<left<<setw(14)<<"Average Score"<<" : "<<fixed << setprecision(2)<<(double)(total_score)/num_part;
    cout<<endl;
    lowest_score = score[0];
    for (i=1; i<num_part; i++){
        if (lowest_score>score[i]){
            lowest_score = score[i];
        }
    }
    cout<<left<<setw(14)<<"Lowest Score"<<" : "<<lowest_score;
    cout<<endl;
    highest_score = score[0];
    for (i=1; i<num_part; i++){
        if (highest_score<score[i]){
            highest_score = score[i];
        }
    }
    cout<<left<<setw(14)<<"Highest Score"<<" : "<<highest_score;

}