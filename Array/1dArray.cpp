#include <iostream>
using namespace std;
int main()
{
  int a[10],i;
  for (i = 0; i < 10; ++i) {
    cout << "Enter Value of A["<<i<<"]: ";
    cin>>a[i];
  }
  cout<<"+++++Show Array++++"<<endl;
  for (i = 0; i < 10; ++i) {
    cout<<a[i]<<"\t";
  }
  int pos;
  cout<<endl<<"Enter the possitoin you wanna delete: ";
  cin>>pos;
  pos--;
  for(int i= pos; i<10; i++){
    int temp = a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
  }
  cout<<"+++++Show Array++++"<<endl;
  for (i = 0; i < 10-1; ++i) {
    cout<<a[i]<<"\t";
  }

}
