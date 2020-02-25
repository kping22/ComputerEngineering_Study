#include <iostream>
using namespace std;

template <class T> 
class Container {
	T *p;
	int size;
public:
	Container(int n);
	~Container();
	void set(int index, T value) { 
		p[index] = value; 
	}
	T get(int index);
};

template <class T>
Container<T>::Container(int n) {
	p = new T [n];
	size=n;
}
template <class T>
Container<T>::~Container() {
	delete [] p;
}
template <class T>
T Container<T>::get(int index) {
	return p[index];	
}

int main() {
	Container<char> c(26);
	
//	for(int i=0; i<26; i++) {
//		c.set(i, 97+i);
//	}
	for(int i=0; i<26; i++) {
		char a= c.get(i);
		cout << a;
	}
}
