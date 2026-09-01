#include <iostream>

using namespace std;

int main () {
   int  var = 20;   // actual variable declaration.
   int  *ip;        // pointer variable 

   ip = &var;       // store address of var in pointer variable

   cout << "Value of var variable: ";
   cout << var << endl;
   
   
   cout<<"Address of variable ";
   cout<<ip<<endl;
   
   cout<<"address of pointer ";
   cout<<*ip<<endl;
   
   return 0;
}