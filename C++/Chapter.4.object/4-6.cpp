#include <iostream>
using namespace std;

class Circle {
	int radius; //원의 반지름 값 
public:
	Circle();
	void setRadius(int radius); //반지름을 설정
	double getArea(); 
};
Circle::Circle() {
	radius = 1;
}
void Circle::setRadius(int radius) { //반지름을 설정 
	this->radius = radius;
}
double Circle::getArea() { // 원의 넓이를 리턴 
	return radius*radius*3.14;
}

int main() {
	int num;
	cout << "원의 개수 >> ";
	cin >> num;
	Circle *pArray = new Circle[num]; //num개의 Circle 배열 생성 
	int radius;
	for(int i=0; i<num; i++) 
	{
		cout << "원" << i+1 << "의 반지름 값 >> ";
		cin >> radius; //반지름 입력 
		pArray[i].setRadius(radius); 
	}
	
	int count=0;
	Circle *p = pArray;
	for(int i=0; i<num; i++)
	{
		if(p->getArea() > 100) //원이 100보다 클경우 count에 하나씩 더해줌 
			count ++;
		p++;
	}
	cout << "면적이 100보다 큰원은 " << count << "개 입니다."; 
	delete [] pArray; //객체 배열 소멸 
}
