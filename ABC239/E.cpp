#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, Q; cin >> N >> Q;
  vector<vector<int>> G(N, vector<int>());
  vector<int> X(N, 0); for(int i = 0; i < N; ++i) cin >> X[i];
  for(int i = 1; i < N; ++i){
    int A, B; cin >> A >> B;
    --A; --B;
    G[A].push_back(B);
    G[B].push_back(A);
  }
  const int K = 20;
  vector<vector<int>> ans(N, vector<int>(K));
  auto merge = [&](vector<int>& a, const vector<int> b){
    a.insert(a.end(), b.begin(), b.end());
    sort(a.rbegin(), a.rend());
    a.resize(K);
  };
  vector<bool> seen(N, false);
  function<vector<int>(int)> dfs = [&](int v){
    seen[v] = true;
    vector<int> res(K, 0);
    res[0] = X[v];
    for(int nv : G[v]){
      if(seen[nv]) continue;
      merge(res, dfs(nv));
    }
    return ans[v] = res;
  };
  dfs(0);
  for(int i = 0; i < Q; ++i){
    int V, K; cin >> V >> K;
    cout << ans[V-1][K-1] << endl;
  }
}

