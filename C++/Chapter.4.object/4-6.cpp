#include <iostream>
using namespace std;

class Circle {
	int radius; //���� ������ �� 
public:
	Circle();
	void setRadius(int radius); //�������� ����
	double getArea(); 
};
Circle::Circle() {
	radius = 1;
}
void Circle::setRadius(int radius) { //�������� ���� 
	this->radius = radius;
}
double Circle::getArea() { // ���� ���̸� ���� 
	return radius*radius*3.14;
}

int main() {
	int num;
	cout << "���� ���� >> ";
	cin >> num;
	Circle *pArray = new Circle[num]; //num���� Circle �迭 ���� 
	int radius;
	for(int i=0; i<num; i++) 
	{
		cout << "��" << i+1 << "�� ������ �� >> ";
		cin >> radius; //������ �Է� 
		pArray[i].setRadius(radius); 
	}
	
	int count=0;
	Circle *p = pArray;
	for(int i=0; i<num; i++)
	{
		if(p->getArea() > 100) //���� 100���� Ŭ��� count�� �ϳ��� ������ 
			count ++;
		p++;
	}
	cout << "������ 100���� ū���� " << count << "�� �Դϴ�."; 
	delete [] pArray; //��ü �迭 �Ҹ� 
}
