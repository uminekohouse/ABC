#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()
#define rep(i,n) for(int i = 0; i < (n); ++i)

int main(){
  ll N; cin >> N;
  vector<ll> A(N); rep(i, N) cin >> A[i];
  map<ll, ll> mp;
  rep(i, N) mp[A[i]]++;
  ll sum = 0;
  for(auto v : mp){
    ll key = v.first;
    ll val = v.second;
    sum += val*(val-1)/2;
  }
  rep(i, N){
    ll tmp = mp[A[i]];
    cout << sum - tmp*(tmp-1)/2 + (tmp-1)*(tmp-2)/2 << endl;

  }

}

