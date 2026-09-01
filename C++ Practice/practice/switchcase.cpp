#include<iostream>
using namespace std;

int main(){
	char grade = 'B';
	
	switch(grade){
		case 'A':
			cout<<"Excellent"<<endl;
			break;
		case 'B':
			cout<<"very good"<<endl;
			break;
		case 'C':
			cout<<"good"<<endl;
			break;
		case 'D':
			cout<<"you passes"<<endl;
			break;
		default :
			cout<<"invalid grade"<<endl;
	}
	cout<<"your grade is : "<<grade<<endl;
	return 0;
}