#include <iostream> 
#include <string>
using namespace std;

class Circle {
	int radius; //���� �������� 
	string name; //���� �̸�
public:
	void setCircle(string name, int radius);//name�� radius���� ����  
	double getArea(); //���� ���� ����  
	string getName(); // �̸��� ����  
};
void Circle::setCircle(string n, int r) {
	name = n; radius = r;
}
double Circle::getArea() {
	return radius*radius*3.14;
}
string Circle::getName() {
	return name;
}

class CircleManager {
	Circle *p; //Circle �迭�� ���� ������
	int size; //�迭�� ũ��
public:
	CircleManager(int s) { 
		p = new Circle[size];
		size = s;		
	} //sizeũ���� �迭�� ��������. ����ڷκ��� �Է¿Ϸ�
	~CircleManager() { delete [] p; } //�迭 ��ȯ�� �Ҹ�  
	void searchByName();
	void setCircleManager(int i, string name, int radius); //setCircle ����Լ��� �ҷ��� ���� �Է�  
    void searchByArea();
};
void CircleManager::searchByName() {
	string n;
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> n; 
	for(int i=0; i<size; i++) //���� ������ �˻��� ���ǿ����� ���  
	{
		if( p[i].getName() == n )
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << endl;
	}
}
void CircleManager::setCircleManager(int i, string name, int radius) {
	p[i].setCircle(name, radius);
}
void CircleManager::searchByArea() {
	int num;
    cout << "�ּ� ������ ������ �Է��ϼ��� ";
    cin >> num;
    for (int i = 0; i < size; i++)
	{
        if (p[i].getArea() > num)
        cout << p[i].getName() << "�� ������ " << p[i].getArea() << ", ";
    }
}

int main() {
	int num, radius;
	string name;
	cout << "���� ���� >> ";
	cin >> num;
	if(num <= 0) return 0;
	CircleManager *ps = new CircleManager(num);//num���� �迭����
	for(int i=0; i<num; i++) //���� �̸��� �������� num-1��ŭ �Է�  
	{
		cout << "�� " << i+1 << "�� �̸��� ������ >> ";
		cin >> name >> radius;
		ps->setCircleManager(i, name, radius);
	} 
	ps->searchByName(); //searchByName�Լ��� �ҷ���  
	ps->searchByArea(); //searchByArea�Լ��� �ҷ���  
}
