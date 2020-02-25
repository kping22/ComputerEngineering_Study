#include <iostream>
using namespace std;

class Person {
	int id;
	double weight;
	string name;
public:
	Person(int i=1, string n="Grace", double w=20.5) { // 디폴트 매개변수로 1 Grace 20.5를 줘서 
													   // 기본생성자로함 
		id = i;
		name = n;
		weight = w;
	}
	void show() { cout << id << ' ' << weight << ' ' << name << endl; } // id 무게 이름 출력 
};

int main() {
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
}
