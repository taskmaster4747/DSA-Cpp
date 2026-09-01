#include<iostream>
using namespace std;

int main(){
	double balance[] = {10,20,30,40,50};
	double *p;
	p = balance;
	for(int i=0; i<5; i++){
		cout<<"*(p+i) = "<<*(p+i)<<endl;
	}
	
	for(int j = 0; j < 5 ; j++)
	{
		cout<<"*(balance+j) = "<<*(balance+j)<<endl;
	}
	
	//cout<<*(p+3)<<endl;
	//cout<<*(balance + 3)<<endl;
	
	return 0;
}