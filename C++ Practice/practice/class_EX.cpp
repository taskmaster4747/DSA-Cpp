#include<iostream>
using namespace std;

class Box{
	public:
		double length;
		double heigth;
		double width;
};

int main(){
	Box box1;
	double volume = 0;
	box1.heigth = 5;
	box1.length = 7;
	box1.width = 6;
	
	volume = box1.heigth * box1.length * box1.width;
	
	cout<<"Volume of box1 is : "<<volume<<endl;
	return 0;
}