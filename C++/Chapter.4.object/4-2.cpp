#include <iostream>
using namespace std;

class Sample {
	int *p;
	int size;
public:
	Sample(int n);//생성자 
	void read(); // 동적 할당받은 정수 배열 p에 사용자로부터 정수를 입력 받음 
	void write(); // 정수배열을 화면에 출력 
	int big(); // 정수배열에서 가장 큰수 리턴 
	~Sample(); // 소멸자 
};

Sample::Sample(int n) { // n개 정수 배열의 동적생성 
	size = n;
	p = new int [n];
}
void Sample::read() {
	cout << "입력할 정수의 개수는? ";
	cin >> size; 
	for(int i=0; i<size; i++ ) {
		cout << i+1 << "번째 정수 : ";
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
int Sample::big() { // 수를 비교해서 max가장 큰수 리턴 
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
	Sample s(10); // 10개 정수배열을 가진 Sample 객체 생성 
	s.read(); //키보드에서 정수 배열 읽기 
	s.write(); // 정수 배열 출력 
	cout << "가장 큰수는 " << s.big(); 
}
