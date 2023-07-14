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
  vector<int> cnt(13, 0);
  for(int i = 0; i < 5; ++i){
    int tmp; cin >> tmp; tmp--;
    cnt[tmp]++;
  }
  bool cnt2 = false, cnt3 = false;
  for(int i = 0; i < 13; ++i){
    if(cnt[i]==2) cnt2 = true;
    if(cnt[i]==3) cnt3 = true;
  }
  if(cnt2&&cnt3) cout << "Yes" << endl;
  else cout << "No" << endl;
}
