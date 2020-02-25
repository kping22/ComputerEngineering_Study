#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	string s;
	cout << "아래에 한줄을 입력하시오. (exit를 입력하면 종료됩니다)" << endl;
	while(1) {
		cout << ">> ";
		getline(cin, s, '\n');
			if(s == "exit"){
				break;
			}
		cout << s << endl;
	}
}

