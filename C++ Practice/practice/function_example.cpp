#include<iostream>
using namespace std;



int main(){
	int a = 100;
	int b = 200;
	int ret;
	
	ret = min(a,b);
	cout<<"value is : "<<ret<<endl;
	
	return 0;
}

int min(int num1, int num2){
	
	int result;
	
	if(num1<num2)
		result = num1;
		else
		result = num2;
		
		return result;
	
}
