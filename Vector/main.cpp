#include <bits/stdc++.h>
#include <vector>
using namespace std;
void printVctor(vector<int> v){
  for(int i=0; i<v.size();i++){
    cout<<v[i]<<" ";
  }
}
int main (int argc, char *argv[])
{
  vector<int> v;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
  }
  printVctor(v);
  vector<int> vss(5);
  cout<<endl<<"Check Size Of VSS : "<<endl<<vss.size()<<endl;
  for(int i=0;i< vss.size();i++){
    cout<<vss[i]<<" ";
  }
  return 0;
}
