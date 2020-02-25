#include <iostream> 
#include <string>
using namespace std;

class Circle {
	int radius; //원의 반지름값 
	string name; //원의 이름
public:
	void setCircle(string name, int radius);//name과 radius값을 받음  
	double getArea(); //원의 넓이 리턴  
	string getName(); // 이름을 리턴  
};
void Circle::setCircle(string n, int r) {
	name = n; radius = r;
}
double Circle::getArea() {
	return radius*radius*3.14;
}
string Circle::getName() {
	return name;
}

class CircleManager {
	Circle *p; //Circle 배열에 대한 포인터
	int size; //배열의 크기
public:
	CircleManager(int s) { 
		p = new Circle[size];
		size = s;		
	} //size크기의 배열을 동적생성. 사용자로부터 입력완료
	~CircleManager() { delete [] p; } //배열 반환후 소멸  
	void searchByName();
	void setCircleManager(int i, string name, int radius); //setCircle 출력함수를 불러와 값을 입력  
    void searchByArea();
};
void CircleManager::searchByName() {
	string n;
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> n; 
	for(int i=0; i<size; i++) //원의 면적을 검색후 조건에따라 출력  
	{
		if( p[i].getName() == n )
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << endl;
	}
}
void CircleManager::setCircleManager(int i, string name, int radius) {
	p[i].setCircle(name, radius);
}
void CircleManager::searchByArea() {
	int num;
    cout << "최소 면적을 정수로 입력하세요 ";
    cin >> num;
    for (int i = 0; i < size; i++)
	{
        if (p[i].getArea() > num)
        cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
    }
}

int main() {
	int num, radius;
	string name;
	cout << "원의 개수 >> ";
	cin >> num;
	if(num <= 0) return 0;
	CircleManager *ps = new CircleManager(num);//num개의 배열생성
	for(int i=0; i<num; i++) //원의 이름과 반지름을 num-1만큼 입력  
	{
		cout << "원 " << i+1 << "의 이름과 반지름 >> ";
		cin >> name >> radius;
		ps->setCircleManager(i, name, radius);
	} 
	ps->searchByName(); //searchByName함수를 불러옴  
	ps->searchByArea(); //searchByArea함수를 불러움  
}
