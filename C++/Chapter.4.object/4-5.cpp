#include <iostream>
using namespace std;

class Circle {
	int radius; //원의 반지름 값 
public:
	void setRadius(int radius); //반지름을 설정
	double getArea(); 
};
void Circle::setRadius(int radius) { //반지름을 설정 
	this->radius = radius;
}
double Circle::getArea() { // 원의 넓이를 리턴 
	return radius*radius*3.14;
}

int main() {
	Circle c[3];
	int radius;
	for(int i=0; i<3; i++) 
	{
		cout << "원" << i+1 << "의 반지름 값 >> ";
		cin >> radius;
		c[i].setRadius(radius);
	}
	
	int count=0;
	for(int i=0; i<3; i++)
	{
		if(c[i].getArea() > 100) //원이 100보다 클경우 count에 하나씩 더해줌 
			count ++;
	}
	cout << "면적이 100보다 큰원은 " << count << "개 입니다."; 
}
