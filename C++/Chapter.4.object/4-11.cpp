#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Player {
	string name; //객체생성
public:
	void getName(); //이름입력 
	string callName(); //이름을 리턴 받음  
};
void Player::getName() {
	cin >> name;
}
string Player::callName() {
	return name;
}

class GamblingGame {
	int num[3]; //0~2숫자
public:
	bool start();
};
bool GamblingGame::start() {
	for(int i =0; i<3; i++) {
			num[i] = rand()%3; //랜덤숫자 세개지정
			srand((unsigned)time(NULL));
		}
		cout << num[0] << " " << num[1] << " " << num[2] << " ";
		if(num[0] ==num[1] && num[0] == num[2] && num[1] == num[2]) //num 0, 1, 2를 비교해서 true 와 false를 가림  
			return true;
		else
			return false;
	
}

int main() {
	Player *p = new Player[2]; //플레이어의 주소값 지정 포인터
	GamblingGame Game; //게임 호출
	
	cout << "*****갬블링 게임을 시작합니다.*****" << endl;
	cout << "첫번째 선수 이름 >> ";
	p[0].getName();
	cout << "두번째 선수 이름 >> ";
	p[1].getName();
	cin.ignore();
	
	while(true) { 
		cout << p[0].callName() << ":<Enter>";
		cin.get();
		cout << endl;
		
		if(Game.start()) { //게임해서 나온값을 0,1비교 후 결과출력 
			cout << p[0].callName() << "님 승리!!";
			break;
		}
		else 
			cout << "아쉽군요 ! ";
			cout << p[1].callName() << ":<Enter>";
			cin.get();
			cout << endl;
			
			if(Game.start()) {
				cout << p[1].callName() << "님 승리!!";
				break;
			} 
			else 
				cout << "아쉽군요 ! ";
	}
}
