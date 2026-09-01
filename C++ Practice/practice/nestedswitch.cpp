#include<iostream>
using namespace std;

int main(){
	int a = 100;
	int b = 200;
	
	switch(a){
		case 100:
			cout<<"value of a is 100"<<endl;
		switch(b){
			case 200:
				cout<<"value of b is 200"<<endl;
		}
	}
	cout<<"value of a is "<<a<<endl;
	cout<<"value of b is "<<b<<endl;
	return 0;
}