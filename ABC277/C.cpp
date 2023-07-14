#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  map<int, vector<int>> mp;

  for(int i = 0; i < N; ++i){
    int A, B; cin >> A >> B;
    mp[A].push_back(B);
    mp[B].push_back(A);
  }

  set<int> seen;
  function<void(int)> dfs = [&](int v){
    seen.insert(v);
    for(auto nv : mp[v]){
      if(seen.count(nv)) continue;
      dfs(nv);
    }
  };
  
  dfs(1);
  auto iter = seen.end();
  iter--;
  cout << *iter << endl;
}




