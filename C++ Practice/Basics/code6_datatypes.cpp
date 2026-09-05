#include<iostream>

using namespace std;

int c = 16;

void built_in_data_types(){

    // **********Built-in Data Types********** //

    printf("\n**********Built-in Data Types**********\n");

    int a, b , c;
    cout<<"Enter the Value of a : "<<endl;
    cin>>a;

    cout<<"Enter the Value of b : "<<endl;
    cin>>b;

    c = a + b;
    cout<<" c = a + b : "<<c<<endl;

    cout<<"The Global c value is  : "<<::c<<endl;  // ::c use for global

    //********** Float , double and long double Literals ***********//

    printf("\n********** Float , double and long double Literals ***********\n");

    float d = 34.4F;
    long double e = 34.4L;

    cout<<"The size of 34.4 is : "<<sizeof(34.4)<<endl;

    cout<<"The size of 34.4f is : "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is : "<<sizeof(34.4F)<<endl;

    cout<<"The size of 34.4l is : "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is : "<<sizeof(34.4L)<<endl;

    cout<<"The value of d is : "<<d<<endl<<"The value of e is : "<<e<<endl;


}

void reference_variables(){

    //********** Reference Variables ***********//

    printf("\n********** Reference Variables ***********\n");

    float x = 455;
    float & y = x; //When used in a variable declaration, & means "this variable is a reference (alias) to another variable."

    cout<<"Value of x is : "<<x<<endl;
    cout<<"Value of y is : "<<y<<endl;

}

void type_casting(){

    //********** type_casting ***********/

    printf("\n********** type_casting ***********\n");
    
    int a = 45;
    float b = 45.67;

    cout<<"The value of a is : "<<(float)a<<endl;
    cout<<"The value of a is : "<<float(a)<<endl;

    cout<<"The value of b is : "<<(int)b<<endl;
    cout<<"The value of b is : "<<int(b)<<endl;

    int c = int(b);

    cout<<"The expression is : "<<a + b<<endl;
    cout<<"The expression is : "<<a + int(b)<<endl;
    cout<<"The expression is : "<<a + (int)b<<endl;
}

int main(){
  built_in_data_types();
  reference_variables();
  type_casting();
    return 0;
}