#include <iostream>
using namespace std;

template<class T> // ���׸� �Լ� 
bool equalArrays(T a[], T b[], int size) { //T Ÿ�� a�迭�� b�迭�� ũ�⸦ ���ϴ� size�� ������ 
	for(int i=0; i<size; i++) { // for���� size�� ũ�⸸ŭ ���� 
		if(a[i] != b[i])  // a�迭�� b�迭�� ũ�⸦ ���Ͽ� �ϳ��� �ٸ��� false���� 
			return false;
	}
	return true; // ������ ���������� Ż�� �Ͽ��� ��� , true ����  
}

int main() {
	int x[] = {0, 102, 100, 6, 4};
	int y[] = {0, 10, 100, 5, 4};
	
	if(equalArrays(x, y, 5))
		cout << "����";
	else 
		cout << "�ٸ���";
}
