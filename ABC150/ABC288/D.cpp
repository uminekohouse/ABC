#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)

int main(){
  int N, K; cin >> N >> K;
  vector<int> A(N+1, 0); 
  for(int i = 0; i <= N; ++i) cin >> A[i];
  set<pair<int, int>> ans;
  for(int i = N; i 
}
