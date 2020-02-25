#include <iostream>
using namespace std;

class Person {
	int id;
	double weight;
	string name;
public:
	Person() { //�⺻�����ڷ� �Ű������� ���� id�� weight�� name���� �Լ������� ó��  
		id = 1;
		weight = 20.5;
		name = "Grace";
	}
	Person(int i, string n) { // i���� n���� ��ü���� �޾ƿ�. 
		id = i;
		weight = 20.5;
		name = n;
	}
	Person(int i, string n, double w) { // i, n , w���� ��ü���� �޾ƿ�. 
		id = i;
		weight = w;
		name = n;
	}
	void show() { cout << id << ' ' << weight << ' ' << name << endl; } // id ���� �̸� ��� 
};

int main() {
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
}
