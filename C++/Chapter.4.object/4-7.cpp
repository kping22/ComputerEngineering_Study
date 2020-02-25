#include <iostream>
using namespace std;

class Person {
	string name;
	string tel;
public:
	string getName(); //생성자함수에 name의 값을 리턴 
	string getTel();// 생성자함수에 tel의 값을 리턴 
	void set(string name, string tel); // name 과 tel에 각각 값을 집어넣음 		
};

string Person::getName() {
	return name;
}

string Person::getTel() {
	return tel;
}

void Person::set(string n, string t) {
	name = n; tel = t;
}

int main()
{
	cout << "이름과 전화번호를 입력해주세요." << endl;
	string name, num;
	Person per[3];
	
	for(int i=0; i<3; i++) // name과 num에각각 3번 집어넣음 
	{
		cout << "사람" << i+1 << " >>" <<" ";
		cin >> name >> num;
		per[i].set(name, num);
	}
	
	cout << "모든사람의 이름은 ";
	for(int i=0; i<3; i++) //getName 함수에 들어간 name 전부 출력  
	{
	cout << per[i].getName() << " ";
	}
	cout << endl; 
	cout << "전화번호 검색합니다. 이름을 입력하세요 >> ";
	cin >> name;
	
	for(int i=0; i<3; i++) 
	{
		if(per[i].getName() == name) //i번째에 getName함수에 리턴된 값과 name값이 같으면 
		cout << "전화번호는 " <<per[i].getTel();
	}
}
