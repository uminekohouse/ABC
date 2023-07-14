#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, M; cin >> N >> M;
  map<string, int> mp;
  for(int i = 0; i < N; ++i){
    string S; cin >> S;
    string tmp = S.substr(3, 3);
    mp[tmp]++;
  }
  int ans = 0;
  set<string> st;
  for(int i = 0; i < M; ++i){
    string T; cin >> T;
    st.insert(T);
  }
  for(auto s : st) ans += mp[s];
  cout << ans << endl;
}




