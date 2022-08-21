#include <iostream>
using namespace std;

int square(int x) { return x * x; }
double square(double y) { return y * y; }

int main() {
  cout << "The square of integer 5 is " << square(5)
       << "\nThe square of double 8.5 is " << square(8.5) << endl;

  return 0;
}
