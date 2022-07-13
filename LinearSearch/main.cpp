#include <iostream>
using namespace std;
int LinearSearch(int arr[], int n, int find){
  for (int i = 0; i < n; i++) {
    if(arr[i] == find){
      return i;
    }
  }
  return -1;
}
int main (int argc, char *argv[])
{
  int arr[10];
  cout<<"Enetr row: ";
  int n;cin>>n;
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  cout<<"Display Arry"<<endl;
  for (int i = 0; i < n; i++) {
    cout<<arr[i]<<"  ";
  }
  cout<<endl<<"Enter number which you want to find: ";
  int find;
  cin>>find;
  int findValue = LinearSearch(arr, n,find);
  if(findValue == -1){
    cout<<"Elements is not present in array"<<endl;
  }else{
    cout<<"Elements is present at index "<<findValue;
  }
  return 0;
}
