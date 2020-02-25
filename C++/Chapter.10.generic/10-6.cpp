#include <iostream>
using namespace std;

template <class T>
void insert(T a, T b[], int index) {
	b[index] = a;
}


int main() {
	int x[5] = {1,2, 4, 5,6};
	char *y = new char[5];
	for(int i=0; i<5; i++) {
		y[i] = i;
	}
	insert(3, x, 1);
	insert(3, y, 1);
	
	for(int i=0; i<5; i++) {
		cout << x[i] << " " << (int)y[i] << endl;
	}
	delete y;
}
