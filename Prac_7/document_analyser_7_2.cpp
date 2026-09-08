// Practical 7.2
// Use strings
// Last updated on 7th September, 2026

#include <iostream>
#include <cstring>
#include <string.h>
#include <iomanip>
using namespace std;

int main(){
    char paragraph[1000];
    int num_char, i, j=0;
    cout<<"********************************************\n";
    cout<<"\tDOCUMENT TEXT ANALYZER\n";
    cout<<"********************************************\n\n";

    cout<<"Enter paragraph : ";
    cin.ignore();
    cin.getline(paragraph, 1000);

    cout<<endl;
    cout<<"--------------------------------------------\n";
    cout<<"\tText Analysis\n";
    cout<<"--------------------------------------------\n\n";

    for (i=0; paragraph[i]!='\0'; i++){

    }
    cout<<"Characters"<<" : "<<i+1;
    cout<<endl;
    for (i=0; paragraph[i]!='\0'; i++){
        if (paragraph[i] == ' '){
            if (paragraph[i+1]==' ' || paragraph[i+1]=='\0'){
                continue;
            }
            else {
                j++;
            }
        }
    }
    cout<<"Words"<<" : "<<j+1;
    cout<<endl;

    cout<<"Alphabets"<<" : "<<i-j+1;
    cout<<endl;
}