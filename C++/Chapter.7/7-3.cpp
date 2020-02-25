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
	bool operator! () { // °´Ã¼³»ÀÇ price¿Í 0ºñ±³ 
		if (price == 0) return true;
		else return false;
	}
};

int main() {
	Book book("º­·è",0,50);
	if (!book)
		cout << "°øÂ¥´Ù" << endl;
}
