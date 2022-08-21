#include <iostream>
using namespace std;

int main (){
	int x = 1;
	int y = 2;
	int z = 3;
	int *const Ptr1 = &y;  
	const int *Ptr2 = &x;  
	const int *const Ptr3 = &z;  
	cout << "x = " << x << endl;
	*Ptr1 = 7;
	cout << "New value of x is : " << x << endl;
	Ptr2 = &z;
	cout << "The value of *Ptr2 is " << *Ptr2 << " and the value of z = " << z << endl;
	cout << "The value of *Ptr3 is " << *Ptr3 << endl;
	return 0;
}
