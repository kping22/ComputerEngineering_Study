#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	string s;
	cout << "�Ʒ��� ������ �Է��Ͻÿ�. (exit�� �Է��ϸ� ����˴ϴ�)" << endl;
	while(1) {
		cout << ">> ";
		getline(cin, s, '\n');
			if(s == "exit"){
				break;
			}
		cout << s << endl;
	}
}

