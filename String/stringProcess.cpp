#include <iostream>
#include <iomanip>
using namespace std;

int main( void ){
	char String1[13] = "Hello World!";
	char *String2 = "Hi Universe!";

	cout << String1 << endl;
	cout << String2 << endl;

	cin >> setw(13) >> String1;
	cout << String1 << endl;

	return 0;
}
