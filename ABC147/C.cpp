#include<bits/stdc++.h>
using namespace std;
using pint = pair<int, int>;

int main(){
  int N; cin >> N;
  vector<vector<pint>> table(N, vector<pint>());
  for(int i = 0; i < N; ++i){
    int A; cin >> A;
    for(int j = 0; j < A; ++j){
      int x, y; cin >> x >> y; x--;
      table[i].push_back(make_pair(x, y));
    }
  }
  int ans = 0;
  for(int bit = 0; bit < 1<<N; ++bit){
    bool ok = true;
    vector<int> vec(N, -1);
    for(int i = 0; i < N; ++i){
      if(bit&1<<i){
        if(vec[i]!=-1&&vec[i]==0){
          ok = false;
          break;
        }
        vec[i] = 1;
        for(auto p : table[i]){
          int x = p.first, y = p.second;
          if(vec[x]!=-1&&vec[x]!=y){
            ok = false;
            break;
          }
          vec[x] = y;
        }
      }
    }
    if(ok){
      int cnt = 0;
      for(int i = 0; i < N; ++i) if(bit&1<<i) cnt++;
      ans = max(cnt, ans);
    }
  }
  cout << ans << endl;
}






