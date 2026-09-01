#include<iostream>
using namespace std;

int main(){
	
	int n[10];
	for(int i=0; i<10; i++){
		n[i]=i+100;
		cout<<"value of n is: "<<n[i]<<endl;
	}
	cout<<"\n";
	cout<<n[5];
	return 0;
}