#include <iostream>
using namespace std;

struct Books{
	char title[30];
	char author[30];
	char subject[30];
	int book_id;
};

int main() {
	struct Books Book1;
	
	//specify
	strcpy(Book1.title, "Learn c++ programming");
	strcpy(Book1.author, "kishan");
	strcpy(Book1.subject, "c++");
	
	cout<<"book nu title : "<<Book1.title<<endl;
	return 0;
}