#include <iostream>
using namespace std;
int main (int argc, char *argv[])
{
  int row;
  cout<<"Enter row: ";
  cin >> row;
  for (int i = 1; i <= row; i++) {
    for (int y = 1; y <= i; y++) {
      cout<<"*";
    }
    cout<<endl;
    
  }
  return 0;
}
