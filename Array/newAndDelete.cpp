#include <iostream>
using namespace std;

int main( void )
{
	float *ptr;
	ptr = new float(3.14);
	cout << *ptr << endl;

	int Size = 10;
	int *pArray = new int[Size];
	pArray[0] = 5;
	pArray[8] = 6;
	cout << pArray[0] << endl;
	cout << pArray[8] << endl;
	delete [] pArray;
	
	return 0;
}
