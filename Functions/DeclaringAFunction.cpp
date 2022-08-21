#include <iostream>
using namespace std;

void ShowAge(int n) { cout << "You are " << n << " years old." << endl; }
int main() {
  int Age;
  cout << "How old are you ? ";
  cin >> Age;
  ShowAge(Age);
  return 0;
}
