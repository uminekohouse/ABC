#include<bits/stdc++.h>
using namespace std;

int main(){
  string S; cin >> S;
  int cnt = 0;
  for(auto c : S){
    if(c=='v') cnt += 1;
    if(c=='w') cnt += 2;
  }
  cout << cnt << endl;
}

