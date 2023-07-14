#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<int> C(N); 
  for(int i = 0; i < N; ++i) cin >> C[i];
  vector<vector<int>> G(N, vector<int>());
  for(int i = 1; i < N; ++i){
    int A, B; cin >> A >> B; --A; --B;
    G[A].push_back(B);
    G[B].push_back(A);
  }

  vector<bool> ans(N, false);
  vector<bool> seen(N, false);
  function<void(int, unordered_set<int>)> dfs = [&](int v, unordered_set<int> st){
    seen[v] = true;
    if(!st.count(C[v])) ans[v] = true;
    st.insert(C[v]);
    for(auto nv : G[v]){
      if(seen[nv]) continue;  
      dfs(nv, st);
    }
  };  
  unordered_set<int> st;
  dfs(0, st);
  for(int i = 0; i < N; ++i){
    if(ans[i]) cout << i+1 << endl;
  }
}
      








