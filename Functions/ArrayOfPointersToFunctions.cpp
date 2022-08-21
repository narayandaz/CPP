#include <iostream>
using namespace std;

void Function0(int Num) {
  cout << "You entered " << Num << ", so Function0 was called.\n";
}
void Function1(int Num) {
  cout << "You entered " << Num << ", so Function1 was called.\n";
}
void Function2(int Num) {
  cout << "You entered " << Num << ", so Function2 was called.\n";
}
void Function3(int Num) {
  cout << "You entered " << Num << ", so Function3 was called.\n";
}

int main(void) {
  const int ArraySize = 4;
  void (*F[ArraySize])(int) = {Function0, Function1, Function2, Function3};
  int Choice;
  cout << "Enter your choice from 0 to 3 : ";
  cin >> Choice;

  if (Choice >= 0 && Choice < ArraySize)
    (*F[Choice])(Choice);
  else
    cout << "Out of Range!\n";
  return 0;
}
