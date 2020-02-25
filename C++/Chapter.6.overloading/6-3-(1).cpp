#include <iostream>
using namespace std;

int big(int a, int b) { //a와 b중 큰값을 찾고 max값에 저장하고 100과 비교해서 작으면 max값 리턴 
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

int big (int a, int b, int c) { // a,b중 큰값을 찾아서 max값에 저장하고 max가 c보다 크면 c리턴 
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
	int x= big(3,5); //3과 5중 큰 값 5는 최대값 100보다 작으므로 , 5 리턴 
	int y= big(300,60); // 300과 60 중 큰 값 300이 최대값 100보다 크므로, 100리턴 
	int z= big(30,60,50); // 30과 60중 큰 값 60이 최대값 50보다 크므로, 50리턴 
	
	cout << x << ' ' << y << ' ' << z;
}
