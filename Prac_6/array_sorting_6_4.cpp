// Practical 6.4
// To multiply matrix and sort and merge arrays.
// Last Updated : 24th August, 2026 at 16:12.

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int matrix_1[3][3];
    int matrix_2[3][3];
    int result[3][3], sum=0, i, j, k;
    int arr_1[5];
    int arr_2[5];
    int merged_arr[10];
    // cout<<"Part A - Matrix Multiplication\n";
    // cout<<"********************************************\n";
    // cout<<"\tMATRIX MULTIPLICATION\n";
    // cout<<"********************************************\n";

    // cout<<"Enter first matrix : \n";
    // for (i=0; i<3; i++){
    //     for (j=0; j<3; j++){
    //         cin>>matrix_1[i][j];
    //     }
    // }
    // cout<<endl;
    // cout<<"Enter second matrix : \n";
    // for (i=0; i<3; i++){
    //     for (j=0; j<3; j++){
    //         cin>>matrix_2[i][j];
    //     }
    // }
    // cout<<endl;
    // cout<<"First matrix : \n\n";
    // for (i=0; i<3; i++){
    //     for (j=0; j<3; j++){
    //         cout<<left<<setw(2)<<matrix_1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // cout<<"Second matrix : \n\n";
    // for (i=0; i<3; i++){
    //     for (j=0; j<3; j++){
    //         cout<<left<<setw(2)<<matrix_2[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // // for (i=0; i<3; i++){
    // //     for (j=0; j<3; j++){
    // //         for (k=0; k<3; k++){
    // //             sum = sum + (matrix_1[i][j])*(matrix_2[j][i]);
    // //         }
    // //     }
    // //     result[i][j] = sum;
    // //     sum = 0;
    // // }

    // for (i=0; i<3; i++){
    //     for (j=0; j<3; j++){
    //         sum=0;
    //         for (k=0; k<3; k++){
    //             sum=sum+matrix_1[i][k]*matrix_2[k][j];
    //         }
    //         result[i][j]=sum;
    //     }
    // }
    // cout<<endl;
    // cout<<"------------------------------------------\n\n";
    // cout<<"Resultant Matrix : \n\n";
    // for (i=0; i<3; i++){
    //     for (j=0; j<3; j++){
    //         cout<<left<<setw(3)<<result[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // cout<<"------------------------------------------";

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

    // for (i=0, j=0; i<10; i=i+2){
    //     if (j<5){
    //         if (arr_1[j]<arr_2[j]){
    //             merged_arr[i] = arr_1[j];
    //             merged_arr[i+1] = arr_2[j];
    //             j++;
    //         }
    //         else{
    //             merged_arr[i] = arr_2[j];
    //             merged_arr[i+1] = arr_1[j];
    //             j++;
    //         }
    //     }
    // }
    int len;
    for (i=0; arr_1[i]!='\0'; i++){
        merged_arr[i] = arr_1[i];
    }
    len=i-3;
    cout<<"Length is : "<<len;
    cout<<endl;
    for (i=0; arr_2[i]!='\0'; i++){
        merged_arr[len] = arr_2[i];
        len++;
    }
    int temp;
    for (i=0; i<10; i++){
        for (j=0; j<10-i; j++){
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