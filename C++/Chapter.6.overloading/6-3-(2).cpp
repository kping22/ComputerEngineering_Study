#include <iostream>
using namespace std;

int big(int a, int b, int c=100) { //a와 b를 비교해서 max에 저장후 max가 c보다 작을경우 max리턴
									//  max가 c보다 클경우 c리턴 
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

int main() { // 디폴트 매개변수를 통해 하나의 함수로 완성 
	int x= big(3,5);
	int y= big(300,60);
	int z= big(30,60,50);
	
	cout << x << ' ' << y << ' ' << z;
}
