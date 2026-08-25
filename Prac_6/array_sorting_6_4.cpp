// Practical 6.4
// To multiply matrix and sort and merge arrays.
// Last Updated : 25th August, 2026 at 10:02.

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int matrix_1[3][3];
    int matrix_2[3][3];
    int result[3][3], sum=0, i, j, k, temp;
    int arr_1[5];
    int arr_2[5];
    int merged_arr[10];
    cout<<"Part A - Matrix Multiplication\n";
    cout<<"********************************************\n";
    cout<<"\tMATRIX MULTIPLICATION\n";
    cout<<"********************************************\n";

    cout<<"Enter first matrix : \n";
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            cin>>matrix_1[i][j];
        }
    }
    cout<<endl;
    cout<<"Enter second matrix : \n";
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            cin>>matrix_2[i][j];
        }
    }
    cout<<endl;
    cout<<"First matrix : \n\n";
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            cout<<left<<setw(2)<<matrix_1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Second matrix : \n\n";
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            cout<<left<<setw(2)<<matrix_2[i][j]<<" ";
        }
        cout<<endl;
    }

    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            sum=0;
            for (k=0; k<3; k++){
                sum=sum+matrix_1[i][k]*matrix_2[k][j];
            }
            result[i][j]=sum;
        }
    }
    cout<<endl;
    cout<<"------------------------------------------\n\n";
    cout<<"Resultant Matrix : \n\n";
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            cout<<left<<setw(3)<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"------------------------------------------\n\n";
    cout<<"Part B - Merge Two Sorted Arrays\n";
    cout<<"********************************************\n";
    cout<<"\tMERGE SORTED ARRAYS\n";
    cout<<"********************************************\n";

    cout<<"Enter First Array :\n";
    for (i=0; i<5; i++){
        cin>>arr_1[i];
    }
    cout<<"Enter Second Array :\n";
    for (i=0; i<5; i++){
        cin>>arr_2[i];
    }
    cout<<endl;
    for (i=0; i<5; i++){
        merged_arr[i] = arr_1[i];
    }
    cout<<endl;
    for (i=0; i<5; i++){
        merged_arr[i+5] = arr_2[i];
    }
    cout<<endl;
    for (i=0; i<9; i++){
        for (j=0; j<9-i; j++){
            if (merged_arr[j]>merged_arr[j+1]){
                temp = merged_arr[j];
                merged_arr[j] = merged_arr[j+1];
                merged_arr[j+1] = temp;
            }
        }
    }

    cout<<"First Array :\n";
    for (i=0; i<5; i++){
        cout<<arr_1[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"Second Array :\n";
    for (i=0; i<5; i++){
        cout<<arr_2[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"Merged Array :\n";
    for (i=0; i<10; i++){
        cout<<merged_arr[i]<<" ";
    }


}
