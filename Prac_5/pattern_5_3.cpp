// Practical 5.3
// To print patterns.
// Last Updated : 15th August, 2026 at 18:25

#include <iostream>
using namespace std;
int main(){
    int n=4;
    cout<<"\n1 - Numeric Pattern\n\n";
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<"\n2 - Lowercase Alphabet Pattern\n\n";
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<<(char)(j+96)<<" ";
        }
        cout<<endl;
    }

    cout<<"\n3 - Uppercase Alphabet Pattern\n\n";
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }

    cout<<"\n4 - Right Half Number Triangle\n\n";
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for (int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<"\n5 - Full Number Pyramid\n\n";
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for (int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        for (int j=i-1; j>0; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<"\n6 - Full Alphabet Pyramid\n\n";
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for (int j=1; j<=i; j++){
            cout<<(char)(j+64)<<" ";
        }
        for (int j=i-1; j>0; j--){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }

}
