#include <iostream>
using namespace std;
int BinarySearch(int arr[], int find, int n){
  int start=0,end=0;
  while (start<=end){
    int mid = (start + end)/2;
    if(arr[mid]==find){
      return mid;
    }
    else if (arr[mid]>find) {
      end = mid-1;
    }else{
      start = mid+1;
    }
  }
  return -1;
}
int main (int argc, char *argv[])
{
  int arr[10];
  int n;
  cout<<"Enter row: ";
  cin>>n;
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  cout<<"Display Arry"<<endl;
  for (int i = 0; i < n; i++) {
    cout<<arr[i]<<" ";
  }
  cout<<endl<<"Enter number which you want to find: ";
  int find;
  cin>>find;
  int findValue = BinarySearch(arr, find, n);
  if(findValue == -1){
    cout<<"Elements is not found";
  }else{
    cout<<"Elements is found at index "<<findValue;
  }
  return 0;
}
