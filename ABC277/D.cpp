#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll N, M; cin >> N >> M;
  vector<ll> A(N); for(int i = 0; i < N; ++i) cin >> A[i];
  map<ll, long long> card_cnt, card_sum;
  ll sum = 0;
  for(ll i = 0; i < N; ++i){
    card_cnt[A[i]%M]++;
    card_sum[A[i]%M] += A[i];
    card_sum[A[i]%M+M] += A[i];
    sum += A[i];
  }


  map<ll, ll> S;
  for(auto p : card_sum){
    ll key = p.first, val = p.second;
    if(key==0) S[key] = val;
    else if(card_sum.count(key-1)) S[key] += S[key-1] + val;
    else S[key] = val;
  }
  for(auto p : S) cout << p.first << " " << p.second << endl;
  ll tmp = 0;
  for(auto p : S) tmp = max(tmp, p.second);
  cout << sum-tmp << endl;
} 

