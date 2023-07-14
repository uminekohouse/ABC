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
  int N; cin >> N;
  vector<int> A(N+1);
  for(int i = 1; i <= N; ++i) cin >> A[i];
  Graph G(2*N+2);
  for(int i = 1; i <= N; ++i){
    G[A[i]].push_back(i*2);
    G[A[i]].push_back(i*2+1);
  }

  vector<int> dist(2*N+2, -1); // 全頂点を「未訪問」に初期化
  queue<int> que;
  // 初期条件 (頂点 0 を初期ノードとする)
  dist[1] = 0;
  que.push(1); // 0 を橙色頂点にする

  // BFS 開始 (キューが空になるまで探索を行う)
  while (!que.empty()) {
      int v = que.front(); // キューから先頭頂点を取り出す
      que.pop();

      // v から辿れる頂点をすべて調べる
      for (int nv : G[v]) {
          if (dist[nv] != -1) continue; // すでに発見済みの頂点は探索しない

          // 新たな白色頂点 nv について距離情報を更新してキューに追加する
          dist[nv] = dist[v] + 1;
          que.push(nv);
      }
  }

  // 結果出力 (各頂点の頂点 0 からの距離を見る)
  for (int v = 1; v <= 2*N+1; ++v) cout << dist[v] << endl;
}
