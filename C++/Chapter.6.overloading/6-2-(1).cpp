#include <iostream>
using namespace std;

class Person {
	int id;
	double weight;
	string name;
public:
	Person() { //기본생성자로 매개변수가 없고 id와 weight와 name값을 함수내에서 처리  
		id = 1;
		weight = 20.5;
		name = "Grace";
	}
	Person(int i, string n) { // i값과 n값을 객체에서 받아옴. 
		id = i;
		weight = 20.5;
		name = n;
	}
	Person(int i, string n, double w) { // i, n , w값을 객체에서 받아옴. 
		id = i;
		weight = w;
		name = n;
	}
	void show() { cout << id << ' ' << weight << ' ' << name << endl; } // id 무게 이름 출력 
};

int main() {
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
}
