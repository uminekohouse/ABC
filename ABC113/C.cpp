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
  int N, M; cin >> N >> M;
  vector<int> P(M), Y(M);
  for(int i = 0; i < M; ++i) cin >> P[i] >> Y[i];
  vector<vector<int>> PY(N, vector<int>());
  for(int i = 0; i < M; ++i) PY[P[i]].push_back[Y[i]];
  for(int i = 0; i < N; ++i) sort(PY[i].rbegin(), PY[i].rend());

  lower_bound(PY[P[i]].begin(), PY[P[i]].end(),Y[i],  greater<int>())

  
}
