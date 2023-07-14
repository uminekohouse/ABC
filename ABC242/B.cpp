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
  string S; cin >> S;
  int num = S.size();
  vector<int> cnt(26, 0);
  for(int i = 0; i < num; ++i){
    cnt[S[i]-'a']++;
  }

  string ans = "";
  for(int i = 0; i < 26; ++i){
    for(int j = 0; j < cnt[i]; ++j){
      ans += char('a'+i);
    }
  }
  cout << ans << endl;
}






