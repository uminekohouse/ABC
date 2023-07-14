#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll N, K, X; cin >> N >> K >> X;
  vector<ll> A(N); for(int i = 0; i < N; ++i) cin >> A[i];
  sort(A.rbegin(), A.rend());
  ll ans = 0;
  for(int i = 0; i < N; ++i)
    while(A[i]-X>=0&&K>0) A[i] -= X, K -= 1;
  sort(A.rbegin(), A.rend());
  for(int i = 0; i < N; ++i)
    while(A[i]&&K) A[i] = 0, K -= 1;
  for(auto a : A) ans += a;
  cout << ans << endl;


}



