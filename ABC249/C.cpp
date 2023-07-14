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
  int N, K; cin >> N >> K;
  vector<string> S(N); for(int i = 0; i < N; ++i) cin >> S[i];
  vector<vector<bool>> char_cnt(N, vector<bool>(26));
  for(int i = 0; i < N; ++i){
    for(auto s : S[i]){
      char_cnt[i][s-'a'] = true;
    }
  }
  int ans = 0;
  for(int bit1 = 0; bit1 < (1<<N); ++bit1){
    vector<int> T;
    for(int i = 0; i < N; ++i){
      if(bit1 & (1<<i)){
        T.push_back(i);
      }
    }
    if(T.size()<K) continue;  
    vector<int> cnt(26, 0);
    for(auto p : T){
      for(int i = 0; i < 26; ++i){
        if(char_cnt[p][i]) cnt[i]++;
      }
    }
    int tmp_ans = 0;
    for(int i = 0; i < 26; ++i){
      if(cnt[i]==K) tmp_ans++;
    }
    chmax(ans, tmp_ans);
  }
  cout << ans << endl;


}




