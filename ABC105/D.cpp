#include<bits/stdc++.h>
#include<iostream>
using namespace std;
using LL = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
const long long LINF = 1LL << 60;
#define all(x) (x).begin(), (x).end()
#define rep(i,n) for(int i = 0; i < (n); ++i)
template<class T>void chmin(T&a, T b){if(a > b) a = b;}
template<class T>void chmax(T&a, T b){if(a < b) a = b;}

int main(){
  int N, M; 
  cin >> N >> M;
  vector<long long> A(N);
  for(int i = 0; i < N; ++i) cin >> A[i];
  vector<long long> S(N+1,0);
  for(int i = 0; i < N; ++i) S[i+1] = S[i] + A[i];
  map<long long, long long> T;
  for(int i = 0; i < N+1; ++i) T[S[i]%M]++;
  long long ans = 0;
  for(auto p : T) ans += p.second * (p.second-1) / 2;
  cout << ans << endl;
}




