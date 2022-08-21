#include <iostream>
using namespace std;

void StaticArray() {
  static int Array1[3]; 
  for (int i = 0; i < 3; i++)
    cout << "Array1[" << i << "] = " << Array1[i] << "   ";
  cout << "\nNow changing their values.\n";
  for (int i = 0; i < 3; i++)
    cout << "Array1[" << i << "] = " << (Array1[i] += 5)
         << "   "; 
  cout << endl << endl;
}

void AutoArray() {
  int Array2[3] = {1, 2, 3};
  for (int i = 0; i < 3; i++)
    cout << "Array2[" << i << "] = " << Array2[i] << "   ";
  cout << "\nNow changing their values.\n";
  for (int i = 0; i < 3; i++)
    cout << "Array2[" << i << "] = " << (Array2[i] += 5) << "   ";
  cout << endl << endl;
}
int main() {
  cout << "Array1 is a Static array but Array2 is an Auto array." << endl;
  cout << "In the first call : \n";
  StaticArray();
  AutoArray();
  cout << "\nIn the second call : \n";
  StaticArray();
  AutoArray();
  return 0;
}
