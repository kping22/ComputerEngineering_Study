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
	friend bool operator== (Book a,int b); // ��ü�� ���ݰ� �Ϲ� ���� �� 
	friend bool operator== (Book a,string b); // ��ü�� ����� ���� �� 
	friend bool operator== (Book a, Book b); // ��ü�� ��� �������� �ٸ� ��ü ������ ��. 
};

bool operator== (Book a,int b) { // ������ ������ true ���� �ٸ��� false ���� 
	if(a.price == b) return true; 
	else return false;
}
bool operator== (Book a,string b) { // ������ ������ true ���� �ٸ��� false ���� 
	if(a.title == b) return true;
	else return false;
}
bool operator== (Book a,Book b) { // ��ü�� ��簪�� �ٸ���ü�� ��簪�� ���ؼ� ������ true����
								// �ٸ��� false ���� 
	if(a.title == b.title && a.price == b.price &&  a.pages == b.pages) return true;
	else return false;
}

int main() {
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000)
		cout << "���� 30000��" << endl;
	if (a == "��ǰ C++")
		cout << "��ǰ C++ �Դϴ�." << endl;
	if (a == b)
		cout << "�� å�� ���� å�Դϴ�.";
}
