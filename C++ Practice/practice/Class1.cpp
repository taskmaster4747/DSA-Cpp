#include<iostream>
using namespace std;

class Box{
	public:
		double length;
		double width;
};

int main(){
	Box box1;
	
	box1.length = 5;
	box1.width = 6;
	
double area = 0;

area = box1.length * box1.width;
cout<<"area of Box1 is : "<<area<<endl;

return 0;
}