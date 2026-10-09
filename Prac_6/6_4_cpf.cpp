// Practical 6.4
// To multiply matrix and sort and merge arrays.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int matrix_1[3][3];
    int matrix_2[3][3];
    int result[3][3], sum = 0, i, j, k;

    int arr_1[5];
    int arr_2[5];
    int merged_arr[10];
    int temp;

    // Part A - Matrix Multiplication

    cout << "********************************************\n";
    cout << "\tMATRIX MULTIPLICATION\n";
    cout << "********************************************\n";

    cout << "Enter First Matrix:\n";

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cin >> matrix_1[i][j];
        }
    }

    cout << "Enter Second Matrix:\n";

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cin >> matrix_2[i][j];
        }
    }

    cout << "\nFirst Matrix\n";

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << left << setw(4) << matrix_1[i][j];
        }
        cout << endl;
    }

    cout << "\nSecond Matrix\n";

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << left << setw(4) << matrix_2[i][j];
        }
        cout << endl;
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum = 0;

            for (k = 0; k < 3; k++) {
                sum = sum + matrix_1[i][k] * matrix_2[k][j];
            }

            result[i][j] = sum;
        }
    }

    cout << "\n------------------------------------------\n";
    cout << "Resultant Matrix\n";

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << left << setw(4) << result[i][j];
        }
        cout << endl;
    }

    cout << "------------------------------------------\n\n";

    // Part B - Merge Two Sorted Arrays

    cout << "********************************************\n";
    cout << "\tMERGE SORTED ARRAYS\n";
    cout << "********************************************\n";

    cout << "Enter First Array:\n";

    for (i = 0; i < 5; i++) {
        cin >> arr_1[i];
    }

    cout << "Enter Second Array:\n";

    for (i = 0; i < 5; i++) {
        cin >> arr_2[i];
    }

    // Copy first array into merged_arr

    for (i = 0; i < 5; i++) {
        merged_arr[i] = arr_1[i];
    }

    // Copy second array into merged_arr

    for (i = 0; i < 5; i++) {
        merged_arr[i + 5] = arr_2[i];
    }

    // Sort merged_arr using bubble sort

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (merged_arr[j] > merged_arr[j + 1]) {
                temp = merged_arr[j];
                merged_arr[j] = merged_arr[j + 1];
                merged_arr[j + 1] = temp;
            }
        }
    }

    cout << "\nFirst Array\n";

    for (i = 0; i < 5; i++) {
        cout << arr_1[i] << " ";
    }

    cout << "\n\nSecond Array\n";

    for (i = 0; i < 5; i++) {
        cout << arr_2[i] << " ";
    }

    cout << "\n\n------------------------------------------\n";
    cout << "Merged Sorted Array\n";

    for (i = 0; i < 10; i++) {
        cout << merged_arr[i] << " ";
    }

    cout << "\n------------------------------------------\n";

    return 0;
}