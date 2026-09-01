#include<iostream>
using namespace std;

int main(){
	int x = 100;
	int y = 200;
	int temp;
	temp = x;
	cout<<"temp is "<<temp<<endl;
	x=y;
	cout<<"x is "<<x<<endl;
	y=temp;
	cout<<"y is "<<y<<endl;
	
	return 0;
}