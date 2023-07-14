#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
  ll N, K; cin >> N >> K;
  vector<ll> A(N+1, 0); for(int i = 1; i <= N; ++i) cin >> A[i];
  vector<ll> S(N+1, 0);
  for(int i = 1; i <= N; ++i) S[i] = S[i-1]+A[i];
  ll ans = 0;
  for(int i = 0; i < N; ++i){
    for(int j = 1; j <= N; ++j){
      if(K == S[j]-S[i]){
        ans++;
      }
    }
  }
  cout << ans << endl;
}
