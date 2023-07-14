#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll N, X; cin >> N >> X;
  string S; cin >> S;
  string newS;
  for(int i = 0; i < S.size(); ++i){
    if(S[i]=='U'

  for(auto s : S){
    if(s=='U') X /= 2;
    if(s=='R') X = X*2+1;
    if(s=='L') X = X*2;
  }
  cout << X << endl;
}
    

  
