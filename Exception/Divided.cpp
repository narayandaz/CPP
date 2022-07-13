#include <iostream>
using namespace std;
int main (int argc, char *argv[])
{
  int a,b;
  cout<<"Enter 1st number: ";
  cin>>a;
  cout<<"Enter 2nd number: ";
  cin>>b;
  try
  {
    if(b==0){
      throw b;
    }
    int div=a/b;
    cout<<"Result: "<<div<<endl;
  }
  catch (int x)
  {
    cout<<"can't divided by "<<x<<endl;
  }
  return 0;
}
