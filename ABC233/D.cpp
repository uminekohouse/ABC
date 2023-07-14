#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll N, K; cin >> N >> K;
  vector<ll> A(N+1, 0); for(int i = 1; i <= N; ++i) cin >> A[i];
  vector<ll> S(N+1, 0);
  for(int i = 1; i <= N; ++i) S[i] = S[i-1]+A[i];
  map<ll, vector<ll>> mp;
  for(int i = 0; i <= N; ++i) mp[S[i]].push_back(i);
  int ans = 0;
  for(int i = 0; i <= N; ++i){
    ll l = S[i];
    auto r_cnt = mp[l+K].end() - lower_bound(mp[l+K].begin(), mp[l+K].end(), i+1);
    ans += r_cnt;
  }
  cout << ans << endl;


  
}
