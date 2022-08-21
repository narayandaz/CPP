#include <iostream>
#include <math.h>
using namespace std;


int main() {
	double max = 0;
	for(int i=0; i<10000; i++) {
		double value = sin(i);
		max = value > max ? value : max;
	}
	cout << "Max: " << max << endl;

	return 0;
}
