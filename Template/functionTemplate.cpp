#include <iostream>
using namespace std;

template <class MyType> MyType maximum(MyType Var1, MyType Var2, MyType Var3) {
  MyType max = Var1;
  if (max < Var2)
    max = Var2;
  if (max < Var3)
    max = Var3;
  return max;
}

int main() {
  int int1, int2, int3;
  cout << "Enter 3 integers : ";
  cin >> int1 >> int2 >> int3;
  cout << "The MAX is : " << maximum(int1, int2, int3) << endl << endl;

  double d1, d2, d3;
  cout << "Enter 3 doubles : ";
  cin >> d1 >> d2 >> d3;
  cout << "The MAX is : " << maximum(d1, d2, d3) << endl << endl;

  char char1, char2, char3;
  cout << "Enter 3 characters : ";
  cin >> char1 >> char2 >> char3;
  cout << "The MAX is : " << maximum(char1, char2, char3) << endl << endl;

  return 0;
}

