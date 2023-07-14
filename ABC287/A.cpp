#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main(){
  int N, M; cin >> N >> M;
  Graph G(N);
  for(int i = 0; i < M; ++i){
    int u, v; cin >> u >> v;
    --u; --v;
    G[u].push_back(v);
    G[v].push_back(u);
  }
  bool flag = true;
  vector<vector<int>> vec(100009, vector<int>());
  for(int i = 0; i < N; ++i){
    vec[G[i].size()].push_back(i);
  }
  if(vec[1].size()!=2) flag = false;
  if(vec[2].size()+2!=N) flag = false;
  if(!flag){
    cout << "No" << endl;
    return 0;
  }
  vector<int> seen(N, false);
  function<void(int)> dfs = [&](int v){
    seen[v] = true;
    for(auto nv : G[v]){
      if(seen[nv]) continue;
      dfs(nv);
    }
  };
  dfs(vec[1][0]);
  for(auto b : seen) if(!b) flag = false;


  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;


}

