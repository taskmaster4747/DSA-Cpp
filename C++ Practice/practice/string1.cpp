#include<iostream>
using namespace std;

int main(){
	
	char str1[10]="hello";
	char str2[10]="world";
	char str3[10];
	
	//copy str1 to str3
	strcpy(str3,str2);
	cout<<str3<<endl;
	
	// concatenates str1 and str2
	strcat(str1,str2);
	cout<<str1;
}