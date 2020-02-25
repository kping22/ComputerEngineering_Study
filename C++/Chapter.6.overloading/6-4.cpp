#include <iostream>
using namespace std;

class myvector{
	int *mem;
	int size;
public:
	myvector(int n=100, int val=0); // 디폴트 매개 변수 설정 
	void show(); // 배열 출력 
	~myvector() { // 소멸자 
		delete [] mem;

	}
}; 

myvector::myvector(int n, int val ) { // 생성자 함수 n크기만큼의 배열에 val값을 각각 집어넣는
									//	함수 
	mem = new int[n]; // 배열 동적 생성 
	size = n; //size는 n값으로 설정 
	for(int i=0; i<size; i++)
		mem[i] = val;
}
void myvector::show() { // mem배열을 0번부터 size의 크기까지 출력 
	for(int i=0; i<size; i++)
	{
		cout << mem[i] << " ";	
	}
	cout << endl;
}

int main() {
	int n, val;
	cout << "n값을 입력하시오. " ;
	cin >> n;
	cout << "val값을 입력하시오. ";
	cin >> val;
	myvector a,b(n, val); //객체 a와 매개변수 값을 갖는 객체 b 생성 
	
	a.show(); // 객체 a의 배열 출력 
	b.show(); // 객체 b의 배열 출력 
}
