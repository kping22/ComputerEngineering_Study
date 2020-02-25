#include <iostream>
using namespace std;

class Sample {
	int *p;
	int size;
public:
	Sample(int n);//������ 
	void read(); // ���� �Ҵ���� ���� �迭 p�� ����ڷκ��� ������ �Է� ���� 
	void write(); // �����迭�� ȭ�鿡 ��� 
	int big(); // �����迭���� ���� ū�� ���� 
	~Sample(); // �Ҹ��� 
};

Sample::Sample(int n) { // n�� ���� �迭�� �������� 
	size = n;
	p = new int [n];
}
void Sample::read() {
	cout << "�Է��� ������ ������? ";
	cin >> size; 
	for(int i=0; i<size; i++ ) {
		cout << i+1 << "��° ���� : ";
		cin >> p[i];
	} 
}
void Sample::write() { 
	for(int i=0; i<size; i++)
	{
		cout << p[i] << " "; 
	}
	cout << endl;
}
int Sample::big() { // ���� ���ؼ� max���� ū�� ���� 
	int max=p[0];
	for(int i=1; i<size; i++) 
	if(p[i] > max) 
	max = p[i];
	return max;
}
Sample::~Sample() {
	delete [] p;
}

int main() {
	Sample s(10); // 10�� �����迭�� ���� Sample ��ü ���� 
	s.read(); //Ű���忡�� ���� �迭 �б� 
	s.write(); // ���� �迭 ��� 
	cout << "���� ū���� " << s.big(); 
}
