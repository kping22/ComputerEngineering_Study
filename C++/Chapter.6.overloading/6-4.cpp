#include <iostream>
using namespace std;

class myvector{
	int *mem;
	int size;
public:
	myvector(int n=100, int val=0); // ����Ʈ �Ű� ���� ���� 
	void show(); // �迭 ��� 
	~myvector() { // �Ҹ��� 
		delete [] mem;

	}
}; 

myvector::myvector(int n, int val ) { // ������ �Լ� nũ�⸸ŭ�� �迭�� val���� ���� ����ִ�
									//	�Լ� 
	mem = new int[n]; // �迭 ���� ���� 
	size = n; //size�� n������ ���� 
	for(int i=0; i<size; i++)
		mem[i] = val;
}
void myvector::show() { // mem�迭�� 0������ size�� ũ����� ��� 
	for(int i=0; i<size; i++)
	{
		cout << mem[i] << " ";	
	}
	cout << endl;
}

int main() {
	int n, val;
	cout << "n���� �Է��Ͻÿ�. " ;
	cin >> n;
	cout << "val���� �Է��Ͻÿ�. ";
	cin >> val;
	myvector a,b(n, val); //��ü a�� �Ű����� ���� ���� ��ü b ���� 
	
	a.show(); // ��ü a�� �迭 ��� 
	b.show(); // ��ü b�� �迭 ��� 
}
