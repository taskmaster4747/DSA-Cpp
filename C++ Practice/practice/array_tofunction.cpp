#include<iostream>
using namespace std;

int main(){
	int size;
	double sum;
	sum = 0;
	int i;
	double avg;
	int balance[] = {10,20,30,40,50};
	for(i=0;i<size;i++){
		sum += balance[i];
	}
	avg = (sum) / size;
	cout<<avg<<endl;
	
	return 0;
}