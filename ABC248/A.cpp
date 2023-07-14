#include<bits/stdc++.h>
using namespace std;

int main(){
  string S; cin >> S;
  vector<bool> vec(10, false);
  for(auto c : S) vec[c-'0'] = true;
  for(int i = 0; i < 10; ++i) if(!vec[i]) cout << i << endl;
}
