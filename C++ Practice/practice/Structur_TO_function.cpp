#include<iostream>
using namespace std;
void printbooks(struct Books book1);
struct Books{
	char title[30];
	char author[30];
	char subject[30];
};

int main(){
	struct Books book1;
	
	strcpy(book1.title,"C++ Programing");
	strcpy(book1.author, "Kishan");
	strcpy(book1.subject, "C++");
	
	printbooks(book1);
	return 0;
}
void printbooks(struct Books book1){
	cout<<"Book Title : "<<book1.title<<endl;
	cout<<"Book Author : "<<book1.author<<endl;
	cout<<"Book Subject : "<<book1.subject<<endl;
	
}