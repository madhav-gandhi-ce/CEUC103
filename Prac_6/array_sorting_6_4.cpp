// Practical 6.4
// To multiply matrix and sort and merge arrays.
// Last Updated : 29th October, 2026 at 12:22.

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout<<"Part A - Matrix Multiplication\n";
    cout<<"********************************************\n";
    cout<<"\tMATRIX MULTIPLICATION\n";
    cout<<"********************************************\n\n";

    int matrix_1[3][3], matrix_2[3][3], matrix_result[3][3] = {0}, i, j, k;
    cout<<"Enter First Matrix\n\n";
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            cin>>matrix_1[i][j];
        } 
    }
    cout<<endl;

    cout<<"\nEnter Second Matrix\n\n";
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            cin>>matrix_2[i][j];
        }
    }
    cout<<endl;


    cout<<"First Matrix\n\n";
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            cout<<matrix_1[i][j]<<" ";
        } 
        cout<<endl;
    }

    cout<<"\nSecond Matrix\n\n";
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            cout<<matrix_2[i][j]<<" ";
        } 
        cout<<endl;
    }
    cout<<endl;

    
    for (i=0; i<3; i++){
        for (k=0; k<3; k++){
            for (j=0; j<3; j++){
                matrix_result[i][k] = matrix_result[i][k] + matrix_1[i][j]*matrix_2[j][k];
            }
        }
    }
    
    cout<<"------------------------------------------\n";
    cout<<"\nResultant Matrix\n\n";
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            cout<<left<<setw(2)<<matrix_result[i][j]<<" ";
        } 
        cout<<endl;
    }
    cout<<"\n------------------------------------------\n";



    cout<<"Part B - Merge Sorted Array\n";
    cout<<"********************************************\n";
    cout<<"\tMERGED SORTED ARRAYS\n";
    cout<<"********************************************\n\n";

    int arr_1[5], arr_2[5], merged_arr[10], i, j, temp;
    cout<<"Enter First Array : ";
    for (i=0; i<5; i++){
        cin>>arr_1[i];
    }
    cout<<endl<<endl;
    cout<<"Enter Second Array : ";
    for (i=0; i<5; i++){
        cin>>arr_2[i];
    }
    cout<<endl<<endl;

    for (i=0; i<5; i++){
        merged_arr[i] = arr_1[i];
    }
    for (i=0; i<5; i++){
        merged_arr[i+5] = arr_2[i];
    }

    for (i=0; i<9; i++){
        for (j=0; j<9-i; j++){
            if (merged_arr[j]>merged_arr[j+1]){
                temp = merged_arr[j];
                merged_arr[j] = merged_arr[j+1];
                merged_arr[j+1] = temp;
            }
        }
    }
    cout<<"\n------------------------------------------\n\n";

    cout<<"Merged Sorted Array\n\n";
    for (i=0; i<10; i++){
        cout<<merged_arr[i]<<" ";
    }
}
