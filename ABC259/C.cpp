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

vector<pair<int, int>> cnt_string(string S){
  int N = S.size();
  int tmp_num = S[0] - 'a';
  int tmp_cnt = 1;
  vector<pair<int, int>> res;
  for(int i = 1; i < N; ++i){
    if(tmp_num == S[i]-'a'){
      tmp_cnt++;
    }
    else{
      res.push_back({tmp_num, tmp_cnt});
      tmp_num = S[i] - 'a';
      tmp_cnt = 1;
    }
    if(i==N-1) res.push_back({tmp_num, tmp_cnt});
  }
  return res;
}


int main(){
  string S, T; cin >> S >> T;
  vector<pair<int, int>> S_vec, T_vec;
  
  S_vec = cnt_string(S);
  T_vec = cnt_string(T);

  /*
  for(auto p : S_vec) cout << p.first << " " << p.second << endl;
  cout << endl;
  for(auto p : T_vec) cout << p.first << " " << p.second << endl;
  */
  
  bool flag = true;
  if(S_vec.size()!=T_vec.size()) flag = false;
  else{
    for(int i = 0; i < S_vec.size(); ++i){
      if(S_vec[i].first!=T_vec[i].first) flag = false;
      else if(S_vec[i].second==1&&T_vec[i].second>1) flag = false;
      else if(S_vec[i].second>T_vec[i].second) flag = false;
    }
  }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;


}




