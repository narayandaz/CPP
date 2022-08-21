#include <iostream>
using namespace std;

template <class TypeName>
void Proceed(TypeName *ArrayName){
	for (int i = 0 ; i < 6 ; i++){
		cout << *ArrayName << endl;
		++ArrayName; 
	}
	cout << endl;
}

int main(){
	char String1[] = "STRING";
	int NumArray1[] = {1,2,3,4,5,6};
	Proceed (String1);
	Proceed (NumArray1);
	Proceed ("Test");  
	return 0;
}


