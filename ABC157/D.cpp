#include<bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
#define all(x) (x).begin(), (x).end()
#define rep(i,n) for(int i = 0; i < (n); ++i)
// Union-Find
struct UnionFind {
    vector<int> par, rank, siz;
    // 構造体の初期化
    UnionFind(int n) : par(n,-1), rank(n,0), siz(n,1) { }
    // 根を求める
    int root(int x) {
        if (par[x]==-1) return x; // x が根の場合は x を返す
        else return par[x] = root(par[x]); // 経路圧縮
    }
    // x と y が同じグループに属するか (= 根が一致するか)
    bool issame(int x, int y) {
        return root(x)==root(y);
    }
    // x を含むグループと y を含むグループを併合する
    bool unite(int x, int y) {
        int rx = root(x), ry = root(y); // x 側と y 側の根を取得する
        if (rx==ry) return false; // すでに同じグループのときは何もしない
        // union by rank
        if (rank[rx]<rank[ry]) swap(rx, ry); // ry 側の rank が小さくなるようにする
        par[ry] = rx; // ry を rx の子とする
        if (rank[rx]==rank[ry]) rank[rx]++; // rx 側の rank を調整する
        siz[rx] += siz[ry]; // rx 側の siz を調整する
        return true;
    }
    // x を含む根付き木のサイズを求める
    int size(int x) {
        return siz[root(x)];
    }
};
int main(){
  int N, M, K; cin >> N >> M >> K;
  vector<vector<bool>> block(N, vector<bool>(N, false));
  Graph G(N);
  UnionFind uf(N);
  for(int i = 0; i < M; ++i){
    int A, B; cin >> A >> B;
    --A; --B;
    G[A].push_back(B);
    G[B].push_back(A);
    uf.unite(A, B);
  }
  for(int j = 0; j < K; ++j){
    int C, D; cin >> C >> D;
    --C; --D;
    block[C][D] = true;
    block[D][C] = true;
  }
  vector<int> cnt(N, 0);
  for(int i = 0; i < N; ++i){
    int u = i, v;
    for(int j = 0; j < G[i].size(); ++j){
      v = G[i][j];
      if(block[u][v]) cnt[i] += 1;
      else uf.unite(u, v);
    }
  }
  //for(int i = 0; i < N; ++i) cout << uf.size(i) - cnt[i] -1 << endl;
  cout << "UFのサイズ" << endl;
  for(int i = 0; i < N; ++i) cout << uf.size(i) << endl;
  cout << "Gのサイズ" << endl;
  for(int i = 0; i < N; ++i) cout << G[i].size() << endl;
  cout << "隣接リストに含まれていてかつブロックリストに含まれる" << endl;
  for(int i = 0; i < N; ++i) cout << cnt[i] << endl;



}

