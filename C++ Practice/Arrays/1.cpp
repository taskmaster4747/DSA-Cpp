#include<iostream>

using namespace std;

int main(){
	
	int marks[4] = {23,45,455,89};
	int mathMarks[4];
	
	cout<<"This are Marks"<<endl;
	mathMarks[0] = 2022;
	mathMarks[1] = 2298;
	mathMarks[2] = 2524;
	mathMarks[3] = 2953;
	
	cout<<marks[0]<<endl;
	cout<<marks[1]<<endl;
	marks[2] = 28; // changing value of the array
	cout<<marks[2]<<endl;
	cout<<marks[3]<<endl;
	
	cout<<"\n This are Math marks"<<endl;
	//cout<<mathMarks[0]<<endl;
	//cout<<mathMarks[1]<<endl;
	//cout<<mathMarks[2]<<endl;
	//cout<<mathMarks[3]<<endl;
	//cout<<mathMarks[4]<<endl;
	
	cout<<"\n Inside of for loop \n";
	for( int i = 0; i < 4; i++ )
	{
		cout<<"The value of Math Marks "<<i<<" is "<<mathMarks[i]<<endl;
	}
	
	int n = 0;
	cout<<"\n Inside of while loop \n";
	while(n < 4)
	{
		cout<<"The value of Math Marks "<<n<<" is "<<mathMarks[n]<<endl;
		n++;
	}
	
	cout<<"\n Inside of do-while loop \n";
	int j = 0;
	do{
	cout<<"The value of Math Marks "<<j<<" is "<<mathMarks[j]<<endl;
	  j++;	
	  }while(j < 4);
	  
	  
	  //marks
	  cout<<"\n Pointers & Array \n";
	  //pointers and arrays
	  int* p = marks;
	  	cout<<*(p++)<<endl;
	  	cout<<*(++p)<<endl;
	    //cout<<"The Value of marks[0] , *p is "<<*p<<endl;
	    //cout<<"The Value of marks[1] , *(p+1) is "<<*(p+1)<<endl;
	    //cout<<"The Value of marks[2] , *(p+2) is "<<*(p+2)<<endl;
	    //cout<<"The Value of marks[3] , *(p+3) is "<<*(p+3)<<endl;
	
	return 0;
}
