#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, M; cin >> N >> M;
  vector<set<int>> G(N+1, set<int>());
  for(int i = 1; i <= M; ++i){
    int A, B; cin >> A >> B;
    G[A].insert(B);
    G[B].insert(A);
  }
  for(int i = 1; i <= N; ++i){
    cout << G[i].size() << endl;;
    for(auto p : G[i]) cout << p << endl;
  }
}




