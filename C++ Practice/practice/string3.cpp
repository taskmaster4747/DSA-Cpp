#include <iostream>
#include <cstring>

using namespace std;

int main () {

   char str1[10] = "Hello ";
   char str2[10] = "World";
   char str3[10];
   int  len ;

   // copy str1 into str3
   strcpy( str3, str2);
   cout << "strcpy( str3, str2) : " << str3 << endl;
   
   // concatenate
   strcat(str1,str2);
   cout<<"concatenated string : "<<str1<<endl;
   return 0;
   
   
}
