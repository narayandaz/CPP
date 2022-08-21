#include <iostream>
#include <iomanip>
using namespace std;

int main( void ){
	const int ArraySize = 40;
	char Sentence[ArraySize];
	cin.getline(Sentence,ArraySize,'\n');
	cout << endl;
	cout << Sentence << endl;
	return 0;
}
