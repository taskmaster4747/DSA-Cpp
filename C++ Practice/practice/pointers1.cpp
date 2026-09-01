void swap(int *x , int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	return;
}


#include<iostream>
using namespace std;
void swap(int *x, int *y);
int main(){
int a = 100;
int b = 200;
cout<<"value of a befor point & swap :"<<a<<endl;
cout<<"value of b befor point & swap :"<<b<<endl;

swap(&a ,&b);

cout<<"value of a after point & swap :"<<a<<endl;
cout<<"value of b after point & swap :"<<b<<endl;

return 0;
	
}