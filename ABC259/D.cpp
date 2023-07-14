#include<bits/stdc++.h>
using namespace std;
using  ll = long long; 

struct V{
  ll x, y, r;
  V(ll x = 0, ll y = 0, ll r = 0){
    x = x; y = y; r = r;
  }
};

int main(){
  int N; cin >> N;
  V s, t;
  cin >> s.x >> s.y >> t.x >> t.y;
  vector<V> c(N);
  for(int i = 0; i < N; ++i) cin >> c[i].x >> c[i].y >> c[i].r;
  auto pow2 = [](ll x){ return x*x;};
  auto dist = [&](V a, V b){ return pow2(a.x-b.x)+pow2(a.y-b.y);};
  auto check = [&](V a, V b){
    if(pow2(a.r-b.r)<=dist(a,b)&&dist(a,b)<=pow2(a.r+b.r)) return 1;
    else return 0;
  };
  vector<vector<int>> G(N);
  for(int i = 0; i < N-1; ++i){
    for(int j = i+1; j < N; ++j){
      if(check(c[i], c[j])){
          G[i].push_back(j);
          G[j].push_back(i);
      }
    }
  }
  auto ng = []{cout << "No" << endl;};
  auto ok = []{cout << "Yes" << endl;};
  int start = -1, goal = -1;
  for(int i = 0; i < N; ++i){
    if(dist(s, c[i]) == pow2(c[i].r)) start = i;
    if(dist(t, c[i]) == pow2(c[i].r)) goal = i;
  }
  if(start==-1||goal==-1) ng();
  vector<bool> seen(N, false);
  function<void(int)> dfs = [&](int v){
    seen[v] = true;
    for(auto nv : G[v]){
      if(seen[nv]) continue;
      dfs(nv);
    }
  };
  dfs(start);
  if(seen[goal]) ok();
  else ng();
}
