#include <iostream>
using namespace std;
int main()
{
  int i=1;
  while (i!=0) {
    char ch;
    cout<<"Enter a Character: ";
    cin>>ch;
    cout<<"Character "<<ch<<" ASCII value is: "<<int(ch)<<endl<<endl;
    cout<<"Enter 1 for Continue and 0 for Exit: ";
    cin>>i;
  }
}
