#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<vector<int>> A(2*N, vector<int>(2*N, 0));
  for(int i = 0; i < 2*N; ++i){
    for(int j = i+1; j < 2*N; ++j){
      cin >> A[i][j];
      A[j][i] = A[i][j];
    }
  }
  set<int> st;
  function<void(int, int)> dfs = [&](int g, int n){
    //cout << "g : " << g << ", n : " << n << endl;
    if(g==0){
      st.insert(n);
      return;
    }
    int v;
    for(int i = 0; i < 2*N; ++i){
      if(g&(1<<i)){
        v = i;
        g &= ~(1<<i); 
        break;
      }
    }
    for(int nv = v+1; nv < 2*N; ++nv){
      if(g&1<<nv) dfs(g&~(1<<nv), n^A[v][nv]);
    }
  };
  dfs((1<<2*N)-1, 0); 
  cout << *st.rbegin() << endl;
}

