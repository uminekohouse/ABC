#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll N, X, A[200009], B[200009], ans = 1LL<<60;

int main(){
  cin >> N >> X;
  for(int i = 1; i <= N; ++i) cin >> A[i] >> B[i];
  ll now = 0;
  for(int i = 1; i <= min(N,X); ++i){
    now += A[i]+B[i];
    X--;
    ans = min(ans, now+X*B[i]);
  }
  cout << ans << endl;
}
















