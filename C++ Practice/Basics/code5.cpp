#include<iostream>

using namespace std;

int global = 6;

void sum(){

    int a;
    cout<<"global variable Form function sum : "<<global<<endl;
}

int main(){

    int global = 14;

    global = 67;
    int a = 18, b = 12;
    float pi = 3.14;
    char c = 'Y';
    bool is_true = false;

    sum();
    cout<<"global variable From main : "<<is_true<<endl;

    if(is_true == 0){
        cout<<"global variable From main value is : "<<global; 
    }

    return 0;
}