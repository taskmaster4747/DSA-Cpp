#include <iostream>
using namespace std;
void printbook(struct Books *Book1);

struct Books {
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
	
	printbook(&Book1);
	return 0;
}
void printbook(struct Books *Book1) {
	cout<<"book no author : "<<Book1->author<<endl;
}


