#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int N; cin >> N;
  vector<ll> A(N+1,0); for(int i = 1; i <= N; ++i) cin >> A[i];
  int Q; cin >> Q;
  ll all = -1;
  map<ll, ll> mp;
  for(int q = 0; q < Q; ++q){
    int c, i, x; cin >> c;
    if(c==1){
      cin >> all;
      mp.clear();
    }
    if(c==2){
      cin >> i >> x;
      mp[i] += x;
    }
    if(c==3){
      cin >> i;
      ll res = all != -1 ? all : A[i];
      res += mp[i];
      cout << res << endl;
    }
  }
} 

