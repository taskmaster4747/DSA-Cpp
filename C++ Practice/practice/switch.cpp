#include<iostream>
using namespace std;
int main(){
	char grade = 'D';
	
	switch(grade){
		case 'A':
		cout<<"Exelant"<<endl;
		break;
		
		case 'B':
			cout<<"Very good"<<endl;
			break;
			
		case 'C':
		    cout<<"Good"<<endl;
			break;
			
		case 'D':
		     cout<<"you are pass"<<endl;
			 break;
			 
			 default:
			  cout<<"invalide"<<endl;
			  		
	}
	cout<<"your grade is "<<grade<<endl;
	return 0;
}