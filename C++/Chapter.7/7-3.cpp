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
	bool operator! () { // ��ü���� price�� 0�� 
		if (price == 0) return true;
		else return false;
	}
};

int main() {
	Book book("����",0,50);
	if (!book)
		cout << "��¥��" << endl;
}
