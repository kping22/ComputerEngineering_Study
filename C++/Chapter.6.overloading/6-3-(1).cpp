#include <iostream>
using namespace std;

int big(int a, int b) { //a�� b�� ū���� ã�� max���� �����ϰ� 100�� ���ؼ� ������ max�� ���� 
	int max = 0;
	if(a>b)
		max = a;
	else
		max = b;
	if(max<100)
	 	return max;
	else 
		return 100;
}

int big (int a, int b, int c) { // a,b�� ū���� ã�Ƽ� max���� �����ϰ� max�� c���� ũ�� c���� 
	int max = 0;
	if(a>b) 
		max=a;
	else 
		max=b;
	if(max>c)
		return c;
	else
		return max;
}
int main() {
	int x= big(3,5); //3�� 5�� ū �� 5�� �ִ밪 100���� �����Ƿ� , 5 ���� 
	int y= big(300,60); // 300�� 60 �� ū �� 300�� �ִ밪 100���� ũ�Ƿ�, 100���� 
	int z= big(30,60,50); // 30�� 60�� ū �� 60�� �ִ밪 50���� ũ�Ƿ�, 50���� 
	
	cout << x << ' ' << y << ' ' << z;
}
