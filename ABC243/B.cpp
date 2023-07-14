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
  int N; cin >> N;
  map<int, int> A_mp;
  map<int, int> B_mp;
  for(int i = 0; i < N; ++i){
    int tmp; cin >> tmp;
    A_mp[tmp] = i;
  }
  for(int i = 0; i < N; ++i){
    int tmp; cin >> tmp;
    B_mp[tmp] = i;
  }
  int ans1 = 0, ans2 = 0;
  for(auto mp : A_mp){
    int A_key = mp.first;
    int A_value = mp.second;
    if(!B_mp.count(A_key)) continue;
    else{
      int B_value = B_mp[A_key];
      if(A_value == B_value) ans1++;
      else ans2++;
    }
  }
  cout << ans1 << endl;
  cout << ans2 << endl;
}






