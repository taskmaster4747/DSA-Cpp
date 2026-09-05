#include<iostream>

using namespace std;

int main(){
	
	//What is pointer? ===> data type which holds the Address of other data type 
		
	int a = 3;
	int* b = &a;
	
	// & --> Address of operator
	cout<<"Address of a :\t"<<&a<<endl; //Address of a in memory
	cout<<"Address of b :\t"<<b<<endl; // Address of b in memory
	
	cout<<"\n";
	
	// * --> Value at Dereference operator
	cout<<"Value at address b is : "<<*b<<endl;
	
	cout<<"\n";
	
	// Pointer to Pointer
	int** c = &b;
	cout<<"The address of b is : \t"<<&b<<endl;
	cout<<"The address of c is : \t"<<c<<endl;
	
	cout<<"The value at address c is : \t"<<*c<<endl;
	cout<<"The value at address value_at(value_at(c)) is : "<<**c<<endl;
	
	return 0;
	
}
