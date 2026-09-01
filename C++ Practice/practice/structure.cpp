#include<iostream>
using namespace std;

struct Books{
	char title[30];
	char author[30];
	char subject[30];
	char book_id;
};

int main(){
	struct Books book1;
	
	strcpy(book1.title, "Learn c++ Programing");
	strcpy(book1.author, "Kishan ");
	strcpy(book1.subject, "C++");
	
	cout<<"Book title : "<<book1.title<<endl;
	
	return 0;
}