// Practical 8.2
// Function design and parameter passing analyzer
// Last Updated On 20th November, 2026 at 22:57

#include<iostream>
using namespace std;
int a, b, global=40;

void first_func(){
    cout<<"This function does not have parameters or return value!\n";
}
int second_func(){
    int a=10, b=20;
    return a+b;
}
void third_func(int a, int b){
    int sum = a+b;
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<sum<<endl;
}
int fourth_func(int a){
     return a*a;
}
void change_by_value(int x){
    x = 20;
    cout<<"Value of x : "<<x<<endl;
}
void change_by_reference(int &x){
    x = 20;
    cout<<"Value of x : "<<x<<endl;
}
void scope(){
    int local = 20;
    cout<<"The value of local variable inside function is : "<<local<<endl;
    cout<<"The value of global variable inside function is : "<<global<<endl;
}
void stu_detail(char name[], int id){
    cout<<"Name : "<<name<<endl;
    cout<<"ID Number : "<<id<<endl;
}
void stu_detail(char name[], int id, float per){
    cout<<"Name : "<<name<<endl;
    cout<<"ID Number : "<<id<<endl;
    cout<<"Percentage : "<<per<<"%"<<endl;
}
void stu_detail(char name[], int id, float per, long long phone){
    cout<<"Name : "<<name<<endl;
    cout<<"ID Number : "<<id<<endl;
    cout<<"Percentage : "<<per<<"%"<<endl;
    cout<<"Contact Number : "<<phone<<endl;
}

int main(){
    // Part A - Function Design
    first_func();
    cout<<endl;
    cout<<"Value returned is : "<<second_func()<<endl;
    third_func(8, 42);
    cout<<"Square of 6 is "<<fourth_func(6)<<endl;

    // Part B - Parameter Passing
    cout<<"\nCall By Value\n";
    a=10;
    cout<<"\nValue of a before changing : "<<a<<endl;
    change_by_value(a);
    cout<<"Value of a after changing : "<<a<<endl;

    cout<<"\nCall By Reference\n";
    b=10;
    cout<<"\nValue of b before changing : "<<b<<endl;
    change_by_reference(b);
    cout<<"Value of b after changing : "<<b<<endl;

    // Part C - Scope and Visibility
    cout<<"Value of global variable outside function is "<<global<<endl;
    scope();
    
    // Part D - Function Overloading
    char name[] = "Rahul";
    cout<<"\nStudent Details :\n";
    stu_detail(name, 506);
    cout<<"\nStudent Details with Academic Information :\n";
    stu_detail(name, 506, 78.3);
    cout<<"\nStudent Details with Academic and Contact Information :\n";
    stu_detail(name, 506, 78.3, 8567435898);
    return 0;
}