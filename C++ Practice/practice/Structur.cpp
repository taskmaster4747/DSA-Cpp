#include<iostream>
using namespace std;

struct Book{
	char title[30];
	char author[30];
	char subject[30];
	char book_id;
};
int main(){
	struct Book book1;
	
	//special
	strcpy(book1.title,"Learn C++ Programing.");
	strcpy(book1.author,"Kishan");
	strcpy(book1.subject,"C++");
	
	cout<<"Book title : "<<book1.title<<endl;
	cout<<"Book author : "<<book1.author<<endl;
	cout<<"Book Subject : "<<book1.subject<<endl;
	return 0;
}