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
  map<int, int> div;
  for(int i = 2; i <= N; ++i){
    int num = i;
    for(int j = 2; j <= i; ++j){
      int cnt = 0;
      while(num%j==0){
        cnt++;
        num /= j;
      }
      if(cnt != 0) div[j] += cnt;
    }
  }
  int cnt75 = 0, cnt25 = 0, cnt15 = 0, cnt5 = 0, cnt3 = 0;
  for(auto p : div){
    auto key = p.first;
    auto val = p.second;
   // cout << "key" << key << "val" << val << endl;
    if(val>=74) cnt75++;
    if(val>=24) cnt25++;
    if(val>=14) cnt15++;
    if(val>=4) cnt5++;
    if(val>=2) cnt3++;
  }
  int ans = cnt75 + cnt25*(cnt3-1) + cnt15*(cnt5-1) + cnt5*(cnt5-1)*(cnt3-2)/2;
  cout << ans << endl;
}
