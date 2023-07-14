#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using Pint = pair<int, int>;

// Union-Find
struct UnionFind {
  vector<int> par, rank, siz;
  // 構造体の初期化
  UnionFind(int n) : par(n, -1), rank(n, 0), siz(n, 1) {}
  // 根を求める
  int root(int x) {
    if (par[x] == -1)
      return x; // x が根の場合は x を返す
    else
      return par[x] = root(par[x]); // 経路圧縮
  }
  // x と y が同じグループに属するか (= 根が一致するか)
  bool issame(int x, int y) { return root(x) == root(y); }
  // x を含むグループと y を含むグループを併合する
  bool unite(int x, int y) {
    int rx = root(x), ry = root(y); // x 側と y 側の根を取得する
    if (rx == ry)
      return false; // すでに同じグループのときは何もしない
    // union by rank
    if (rank[rx] < rank[ry])
      swap(rx, ry); // ry 側の rank が小さくなるようにする
    par[ry] = rx;   // ry を rx の子とする
    if (rank[rx] == rank[ry])
      rank[rx]++;       // rx 側の rank を調整する
    siz[rx] += siz[ry]; // rx 側の siz を調整する
    return true;
  }
  // x を含む根付き木のサイズを求める
  int size(int x) { return siz[root(x)]; }
};

int main() {
  int N, M;
  cin >> N >> M;
  UnionFind uf(N);
  rep(_, M) {
    int u, v;
    cin >> u >> v;
    --u;
    --v;
    uf.unite(u, v);
  }
  int K;
  cin >> K;
  set<Pint> st;
  rep(_, K) {
    int x, y;
    cin >> x >> y;
    --x;
    --y;
    int X = uf.root(x);
    int Y = uf.root(y);
    if (X > Y)
      swap(X, Y);
    st.insert(Pint(X, Y));
  }
  int Q;
  cin >> Q;
  rep(_, Q) {
    int p, q;
    cin >> p >> q;
    --p;
    --q;
    p = uf.root(p);
    q = uf.root(q);
    if (p > q)
      swap(p, q);
    if (st.count(Pint(p, q)))
      cout << "No" << endl;
    else
      cout << "Yes" << endl;
  }
}
