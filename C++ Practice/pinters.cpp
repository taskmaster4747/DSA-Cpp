#include<iostream>

using namespace std;

int main(){
	
	//What is pointer? ===> data type which holds the Address of other data type 
		
	int a = 3;
	int* b = &a;
	
	cout<<"Address of a :\t"<<&a<<endl; //Address of a in memory
	cout<<"Address of b :\t"<<b<<endl; // Address of b in memory
	
	// & --> Address of operator
	// * --> Dereference operator
	
	
	return 0;
	
}
