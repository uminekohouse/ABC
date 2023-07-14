#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int N; cin >> N; 
  long long T; cin >> T;
  vector<ll> A(N+1, 0); for(int i = 1; i <= N; ++i) cin >> A[i];
  vector<ll> S(N+1, 0); for(int i = 1; i <= N; ++i) S[i] = S[i-1] + A[i];
  ll M = T%S[N];
  int pos = lower_bound(S.begin(), S.end(), M) - S.begin();
  int time = M - S[pos-1];
  cout << pos << " " << time << endl;
}




