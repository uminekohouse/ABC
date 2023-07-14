#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, M; cin >> N >> M;
  vector<vector<int>> G(N);
  for(int i = 0; i < M; ++i){
    int u, v; cin >> u >> v; 
    u--; v--;
    G[u].push_back(v);
    G[v].push_back(u);
  }
  vector<int> seen(N, -1);

  int now = 0;
  function<void(int)> dfs = [&](int v){
    seen[v] = now;
    for(auto nv : G[v]){
      if(seen[nv]!=-1) continue;
      dfs(nv);
    }
  };
  
  for(int v = 0; v < N; ++v){
    if(seen[v]!=-1) continue;
    now++;
    dfs(v);
  }
  cout << now << endl;
}





