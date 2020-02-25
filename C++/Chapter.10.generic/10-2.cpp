#include <iostream>
using namespace std;

template<class T> // 제네릭 함수 
bool equalArrays(T a[], T b[], int size) { //T 타입 a배열과 b배열과 크기를 뜻하는 size를 가져옴 
	for(int i=0; i<size; i++) { // for문을 size의 크기만큼 돌림 
		if(a[i] != b[i])  // a배열과 b배열의 크기를 비교하여 하나라도 다르면 false리턴 
			return false;
	}
	return true; // 루프를 성공적으로 탈출 하였을 경우 , true 리턴  
}

int main() {
	int x[] = {0, 102, 100, 6, 4};
	int y[] = {0, 10, 100, 5, 4};
	
	if(equalArrays(x, y, 5))
		cout << "같다";
	else 
		cout << "다르다";
}
