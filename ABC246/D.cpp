#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
  ll N; cin >> N;
  vector<vector<ll>> memo(4, vector<ll>(1000009, 0));
  for(int i = 1; i <= 1000009; ++i){
    memo[i][1] = i; memo[i][2] = memo[i][1]*i;
    memo[i][3] = memo[i][2]*i;
  }
  while(1){
    

}





