#include<iostream>
using namespace std;
void printbook(struct Books book1);
struct Books{
	char title[30];
	char author[30];
	char subject[30];
	char book_id;
};

int main(){
	struct Books book1;
	
	strcpy(book1.title,"Learn c++ programing");
	strcpy(book1.author, "kishan");
	strcpy(book1.subject, "c++");
	
	printbook(book1);
	return 0;
}

void printbook(struct Books book1){
	cout<<"Book author : "<<book1.author<<endl;
}