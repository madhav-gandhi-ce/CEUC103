// Practical 7.2
// Use strings
// Last updated on 26th September, 2026

#include <iostream>
#include <cstring>
#include <string.h>
#include <iomanip>
using namespace std;

int main(){
    char paragraph[1000], first_name[100], last_name[100];
    int alphabet=0, digit=0, sp_char=0, words=0, num_char, i, j=0, k=0, z;
    cout<<"********************************************\n";
    cout<<"\tDOCUMENT TEXT ANALYZER\n";
    cout<<"********************************************\n\n";

    cout<<"Enter paragraph : ";
    cin.getline(paragraph, 1000);
    cout<<endl;


    cout<<endl;
    cout<<"--------------------------------------------\n";
    cout<<"\tText Analysis\n";
    cout<<"--------------------------------------------\n\n";

    // Part A – Text Analysis

    // Count Characters
    for (i=0; paragraph[i]!='\0'; i++){
    }
    num_char = i;
    cout<<"Characters"<<" : "<<num_char;
    cout<<endl;

    // Words
    if (paragraph[0]==' '){
        for (k=1; paragraph[k] == ' '; k++){

        }
    }
    for (i=0; paragraph[i+k]!='\0'; i++){
        if (paragraph[i+k] == ' '){
            if (paragraph[i+k+1]!=' ' && paragraph[i+k+1]!='\0'){
                j++;
            }
            else {
                continue;
            }
        }
    }
    if (paragraph[k] == '\0') {
        j = 0;
    } 
    else {
        j++;
    }
    words = j;
    cout<<"Words"<<" : "<<words;
    cout<<endl;


    // Alphabets
    for (i=0; paragraph[i]!='\0'; i++){
        if (paragraph[i]!=' '){
            if (((int)(paragraph[i]) >= 65 && (int)(paragraph[i]) <= 90) || ((int)(paragraph[i]) >= 97 && (int)(paragraph[i]) <= 122)){
                alphabet = alphabet + 1;
            }
        }
    }

    cout<<endl;
    cout<<"Alphabets"<<" : "<<alphabet;

    // Digits
    for (i=0; paragraph[i]!='\0'; i++){
        if (paragraph[i]!=' '){
            if (((int)(paragraph[i]) >= 48 && (int)(paragraph[i]) <= 57)){
                digit = digit + 1;
            }
        }
    }
    cout<<endl;
    cout<<"Digits"<<" : "<<digit;

    // Special Characters
    j=0;
    for (i=0; paragraph[i]!='\0'; i++){
        if (paragraph[i] == ' '){
            j++;
        }
        else{
            continue;
        }
    }

    sp_char = num_char-alphabet-digit-j;

    cout<<endl;
    cout<<"Special Characters"<<" : "<<sp_char;

    
    // Part B - String Extraction
    
    cout<<"\n\n--------------------------------------------\n";
    cout<<"\t\tString Extraction\n";
    cout<<"--------------------------------------------\n\n";

    for (i=0; paragraph[k+i]!=' '; i++){
        first_name[i] = paragraph[k+i];
    }

    cout<<endl;
    cout<<"First Name"<<" : "<<first_name;

    k=0;
    for (i=num_char-1; paragraph[i]==' '; i--){
        k++;
    }

    if (k==0){
        for (i=num_char-1, j=0; paragraph[i]!=' '; i--){
            // last_name[j] = paragraph[i-1];
            j++;
        }
        for (i=num_char-k-j, z=0; paragraph[i]!='\0'; i++){
            last_name[z] = paragraph[i];
            z++;
        }
    
        cout<<endl;
        cout<<"Last Name"<<" : "<<last_name;
    }
    else {
        for (i=num_char-k-1, j=0; paragraph[i]!=' '; i--){
            // last_name[j] = paragraph[i];
            j++;
        }
        for (i=num_char-k-j, z=0; paragraph[i]!='\0'; i++){
            last_name[z] = paragraph[i];
            z++;
        }
        cout<<endl;
        cout<<"Last Name"<<" : "<<last_name;
    }




}

