#include <iostream>
using namespace std;

class Person {
	string name;
	string tel;
public:
	string getName(); //�������Լ��� name�� ���� ���� 
	string getTel();// �������Լ��� tel�� ���� ���� 
	void set(string name, string tel); // name �� tel�� ���� ���� ������� 		
};

string Person::getName() {
	return name;
}

string Person::getTel() {
	return tel;
}

void Person::set(string n, string t) {
	name = n; tel = t;
}

int main()
{
	cout << "�̸��� ��ȭ��ȣ�� �Է����ּ���." << endl;
	string name, num;
	Person per[3];
	
	for(int i=0; i<3; i++) // name�� num������ 3�� ������� 
	{
		cout << "���" << i+1 << " >>" <<" ";
		cin >> name >> num;
		per[i].set(name, num);
	}
	
	cout << "������� �̸��� ";
	for(int i=0; i<3; i++) //getName �Լ��� �� name ���� ���  
	{
	cout << per[i].getName() << " ";
	}
	cout << endl; 
	cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ��� >> ";
	cin >> name;
	
	for(int i=0; i<3; i++) 
	{
		if(per[i].getName() == name) //i��°�� getName�Լ��� ���ϵ� ���� name���� ������ 
		cout << "��ȭ��ȣ�� " <<per[i].getTel();
	}
}
