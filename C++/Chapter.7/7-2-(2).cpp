#include <iostream>
using namespace std;

class Book {
	string title;
	int price;
	int pages;
public:
	Book(string title="", int price = 0, int pages = 0) {
		this->title = title;
		this->price = price;
		this->pages = pages;
	}
	friend bool operator== (Book a,int b); // 객체의 가격과 일반 가격 비교 
	friend bool operator== (Book a,string b); // 객체의 제목과 제목 비교 
	friend bool operator== (Book a, Book b); // 객체의 모든 변수값과 다른 객체 변수값 비교. 
};

bool operator== (Book a,int b) { // 가격이 같으면 true 리턴 다르면 false 리턴 
	if(a.price == b) return true; 
	else return false;
}
bool operator== (Book a,string b) { // 제목이 같으면 true 리턴 다르면 false 리턴 
	if(a.title == b) return true;
	else return false;
}
bool operator== (Book a,Book b) { // 객체의 모든값과 다른객체의 모든값을 비교해서 같으면 true리턴
								// 다르면 false 리턴 
	if(a.title == b.title && a.price == b.price &&  a.pages == b.pages) return true;
	else return false;
}

int main() {
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000)
		cout << "정가 30000원" << endl;
	if (a == "명품 C++")
		cout << "명품 C++ 입니다." << endl;
	if (a == b)
		cout << "두 책은 같은 책입니다.";
}
