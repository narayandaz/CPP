#include <iostream>
using namespace std;

unsigned int factorial(unsigned int n) {
  int fact = 1;
  n < 1 ? fact = 1 : fact = n * factorial(n - 1);
  return fact;
}

int main() {
  unsigned long number;
  cout << "Enter a number to calculate n! : ";
  cin >> number;
  cout << number << "! = " << factorial(number) << endl;
  return 0;
}
