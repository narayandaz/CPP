#include <iostream>
using namespace std;

size_t GetArray (int *ArrayName , int ArraySize){
	return sizeof ArrayName;
}

int main(){
	const int ArraySize = 5;
	int a = 5;
	unsigned int b = 5;
	float c = 5;
	double d = 5;
	int Array1[ArraySize] = {1,2,3,4,5};

	cout << "a : " << sizeof(a) <<"\nb : " << sizeof(b) 
		<< "\nc : " << sizeof(c) << "\nd : " << sizeof(d) << endl;
	cout << "ArraySize : " << sizeof (ArraySize) << endl;
	cout << "Array1 (with 5 integer elements) : " << sizeof (Array1) << endl;
	cout << "Array1 has " << (sizeof Array1 / sizeof(int)) << " elements." << endl;
	cout << "Gotten Array : " << GetArray(Array1,ArraySize) << endl;

	return 0;
}


