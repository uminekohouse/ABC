#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int N, Q; cin >> N >> Q;
  ll A[N+1]; A[0] = 0;
  for(int i = 1; i <= N; ++i) cin >> A[i];

  sort(A+1, A+N+1);
  ll S[N+1]; S[0] = 0;
  for(ll i = 1; i <= N; ++i) S[i] = S[i-1] + A[i];
  for(int q = 0; q < Q; ++q){
    ll X; cin >> X;
    ll iter = lower_bound(A+1, A+N+1, X) - A-1;
    ll res = 0;
    if(iter==N) res += X*N - S[N];
    else{
      res += X*iter - S[iter];
      res += S[N]-S[iter] - X*(N-iter);
    }
    cout << res << endl;
  }
}


