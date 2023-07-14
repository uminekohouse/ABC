#include<bits/stdc++.h>
#include<iostream>
using namespace std;
using LL = long long;
//using P = pair<int,int>;
//using Graph = vector<vector<int>>;
const long long LINF = 1LL << 60;
#define all(x) (x).begin(), (x).end()
#define rep(i,n) for(int i = 0; i < (n); ++i)
template<class T>void chmin(T&a, T b){if(a > b) a = b;}
template<class T>void chmax(T&a, T b){if(a < b) a = b;}

int N, X, Y, U[200009], V[200009];
vector<vector<int>> G;
vector<int> seen;
vector<int> ans;

bool dfs(int v, int x){
  seen[v] = true;
  if(v==x){
    ans.push_back(v);
    return true;
  }
  for(auto nv : G[v]){
    if(seen[nv]) continue;
    seen[nv] = true;
    if(dfs(nv, x)){
      ans.push_back(v);
      return true;
    }
  }
  return false;
}

int main(){
  cin >> N >> X >> Y;
  for(int i = 1; i <= N-1; ++i) cin >> U[i] >> V[i];
  G.assign(N+1, vector<int>());
  for(int i = 1; i <= N-1; ++i){
    G[U[i]].push_back(V[i]);
    G[V[i]].push_back(U[i]);
  }
  seen.assign(N+1, false);
  dfs(X, Y);
  reverse(ans.begin(), ans.end());
  for(auto a : ans) cout << a << endl;
}


