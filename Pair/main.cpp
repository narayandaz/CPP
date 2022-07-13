#include <bits/stdc++.h>
#include <future>
#include <utility>
using namespace std;
int main (int argc, char *argv[])
{
  pair<int,string> v;
  v = make_pair(143, "Vaishu");
  cout<<v.first <<" "<<v.second<<endl;
  v ={91221,"Solve"};
  cout<<v.first<<" "<<v.second<<endl;
  
  pair<int,int> a[3];
  a[0]={1,2};
  a[1]={2,3};
  a[2]={3,4};
  swap(a[0], a[2]);
  for(int i=0;i<3;i++){
    cout<<a[i].first<<" "<<a->second<<endl;
  }

  return 0;
}
