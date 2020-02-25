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
	bool operator== (int p) { // ��ü���� price�� ���� p �� 
		if (price == p) return true;
		else return false;
	}
	bool operator== (string t) {
		if (title == t) return true; // ��ü���� title���� string t���� �� 
		else return false;
	}
	bool operator== (Book a) { // ��ü�� �ٸ� ��ü������ ���� 
		if(a.price == price && a.title == title && a.pages == pages)
		return true;
		else return false;
	}
};


int main() {
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000)
		cout << "���� 30000��" << endl;
	if (a == "��ǰ C++")
		cout << "��ǰ C++ �Դϴ�." << endl;
	if (a == b)
		cout << "�� å�� ���� å�Դϴ�.";
}
