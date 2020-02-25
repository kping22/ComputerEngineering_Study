#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Player {
	string name; //��ü����
public:
	void getName(); //�̸��Է� 
	string callName(); //�̸��� ���� ����  
};
void Player::getName() {
	cin >> name;
}
string Player::callName() {
	return name;
}

class GamblingGame {
	int num[3]; //0~2����
public:
	bool start();
};
bool GamblingGame::start() {
	for(int i =0; i<3; i++) {
			num[i] = rand()%3; //�������� ��������
			srand((unsigned)time(NULL));
		}
		cout << num[0] << " " << num[1] << " " << num[2] << " ";
		if(num[0] ==num[1] && num[0] == num[2] && num[1] == num[2]) //num 0, 1, 2�� ���ؼ� true �� false�� ����  
			return true;
		else
			return false;
	
}

int main() {
	Player *p = new Player[2]; //�÷��̾��� �ּҰ� ���� ������
	GamblingGame Game; //���� ȣ��
	
	cout << "*****���� ������ �����մϴ�.*****" << endl;
	cout << "ù��° ���� �̸� >> ";
	p[0].getName();
	cout << "�ι�° ���� �̸� >> ";
	p[1].getName();
	cin.ignore();
	
	while(true) { 
		cout << p[0].callName() << ":<Enter>";
		cin.get();
		cout << endl;
		
		if(Game.start()) { //�����ؼ� ���°��� 0,1�� �� ������ 
			cout << p[0].callName() << "�� �¸�!!";
			break;
		}
		else 
			cout << "�ƽ����� ! ";
			cout << p[1].callName() << ":<Enter>";
			cin.get();
			cout << endl;
			
			if(Game.start()) {
				cout << p[1].callName() << "�� �¸�!!";
				break;
			} 
			else 
				cout << "�ƽ����� ! ";
	}
}
