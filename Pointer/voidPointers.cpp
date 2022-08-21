#include <iostream>
using namespace std;

int main ( void ){
	int n = 5;
	char c = 'c';
	double d = 54.4;
	void * vPtr;
	vPtr = &n;
	cout << *(int *)vPtr << endl;
	vPtr = &c;
	cout << *(char *)vPtr << endl;  
	vPtr = &d;
	cout << *(double *)vPtr << endl;
	return 0;
}
