
void swap(int x , int y){
	int temp ;
	temp = x;
	x = y;
	y = temp;
	
	return;
}

#include<iostream>
using namespace std;

int main(){
	
	int a = 100;
	int b = 200;
	
	cout<<"value of a before swap : "<<a<<endl;
	cout<<"value of b before swap : "<<b<<endl;
	
	swap(a,b);
	
	cout<<"value of a after swap :"<<a<<endl;
	cout<<"value of b after swap :"<<b<<endl;
	
	return 0;
}

