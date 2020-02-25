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
	bool operator== (int p) { // 객체내의 price와 정수 p 비교 
		if (price == p) return true;
		else return false;
	}
	bool operator== (string t) {
		if (title == t) return true; // 객체내의 title값과 string t와의 비교 
		else return false;
	}
	bool operator== (Book a) { // 객체와 다른 객체끼리의 값비교 
		if(a.price == price && a.title == title && a.pages == pages)
		return true;
		else return false;
	}
};


int main() {
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000)
		cout << "정가 30000원" << endl;
	if (a == "명품 C++")
		cout << "명품 C++ 입니다." << endl;
	if (a == b)
		cout << "두 책은 같은 책입니다.";
}
