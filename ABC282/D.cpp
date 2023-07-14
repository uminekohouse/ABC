#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, M; cin >> N >> M;
  vector<set<int>> G(N, set<int>());
  vector<int> a(M), b(M); 
  for(int i = 0; i < M; ++i){
    int u, v; cin >> u >> v;
    v--; u--;
    G[u].insert(v);
    G[v].insert(u);
  }
  vector<int> color(N, -1);   // color[v]：頂点 v の色が黒なら 1, 白なら 0, 未探索なら -1
  vector<int> group(N,-1);
  int g = 0;
  // 全ての頂点について
  for(int v = 0; v < N; ++v) {
    // 頂点 v がすでに訪問済みであれば、スキップ
    if(color[v] != -1) {continue;}
    if(group[v] == -1) {g++; group[v] = g;}
    // そうでなければ、頂点 v を含む連結成分は未探索
    // 頂点 v の色を白で決め打ちしたうえで、幅優先探索を行う
    queue<int> que; // 探索候補の頂点番号を入れるキュー
    color[v] = 0;
    que.push(v);
    // キューに要素が残っている限り
    while(que.size() > 0) {
      int qv = que.front();
      que.pop();
      // 頂点 qv に隣接している頂点 nv について、
      for(auto nv : G[qv]) {
        // nv がすでに探索済みならば、スキップする
        if(color[nv] != -1) {
          // 隣り合う頂点どうしが同じ色なら、答えは No
          if(color[nv] == color[qv]) {cout << 0 << endl; return 0;}
          continue;
        }
        // そうでなければ、頂点 nv の色を color[qv] と逆にしたうえで、nv も探索候補に入れる
        color[nv] = 1 - color[qv];
        group[nv] = g;
        que.push(nv);
      }
    }
  }
  int ans = 0;
  for(int i = 0; i < N-1; ++i){
    for(int j = i+1; j < N; ++j){
      if(group[i]==group[j]){
        if(!G[i].count(j)&&color[i]!=color[j]) ans++;
      }
      else ans++;
    }
  }
  cout << ans << endl;
  
}


