#include <iostream>
using namespace std;

int big(int a, int b, int c=100) { //a�� b�� ���ؼ� max�� ������ max�� c���� ������� max����
									//  max�� c���� Ŭ��� c���� 
	int max = 0;
	if(a>b)
		max = a;
	else
		max = b;
	if(max<c)
	 	return max;
	else 
		return c;
}

int main() { // ����Ʈ �Ű������� ���� �ϳ��� �Լ��� �ϼ� 
	int x= big(3,5);
	int y= big(300,60);
	int z= big(30,60,50);
	
	cout << x << ' ' << y << ' ' << z;
}
