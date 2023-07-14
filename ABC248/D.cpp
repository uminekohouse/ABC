#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  map<int, vector<int>> mp;
  vector<int> A(N+1); for(int i = 1; i <= N; ++i) cin >> A[i];
  for(int i = 1; i <= N; ++i) mp[A[i]].push_back(i);

  int Q; cin >> Q;
  for(int q = 0; q < Q; ++q){
    int L, R, X; cin >> L >> R >> X;
    auto res = upper_bound(mp[X].begin(), mp[X].end(), R)- lower_bound(mp[X].begin(), mp[X].end(), L);
    cout << res << endl;
  }
}
