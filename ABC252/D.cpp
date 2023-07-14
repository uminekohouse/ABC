#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll N; cin >> N;
  vector<ll> A(N); for(int i = 0; i < N; ++i) cin >> A[i];
  sort(A.begin(), A.end());
  ll ans = 0;
  for(int i = 0; i < N; ++i){
    ll tmp = lower_bound(A.begin(), A.end(), A[i]) - A.begin();
    tmp *= A.end() - upper_bound(A.begin(), A.end(), A[i]);
    ans += tmp;
  }
  cout << ans << endl;
}

