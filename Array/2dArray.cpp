#include <iostream>
using namespace std;

int a[10][10];
void insertArray(){
  cout<<"This is a 3x3 Array.."<<endl;
  for (int i=0; i<3; ++i) {
    for (int y = 0; y < 3; y++) {
      cout<<"Enter Value of A["<<i<<"]["<<y<<"] : ";
      cin>>a[i][y];
    }
  }
}
void showArray(){
  cout<<endl<<"+++++++++++Show Array++++++++++"<<endl;
  for (int i = 0; i <3 ; ++ i) {
    for (int y = 0; y< 3; y++) {
    cout<<a[i][y]<<"\t";
    }
    cout<<endl;
  }
}
void deleteArray(){
  cout << "Enter which possition you want to delete : ";
  for (int i = 0;  i < 3; ++ i) {
    for (int i = 0; i < 3; ++ i) {
       
    }
  }
}
int main()
{
  insertArray();
  showArray();
}
