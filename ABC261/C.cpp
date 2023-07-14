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
  vector<string> S(N);
  for(int i = 0; i < N; ++i) cin >> S[i];

  map<string, int> mp;
  for(auto s : S){
    if(mp[s]==0){
      cout << s << endl;
      mp[s]++;
    }
    else{
      cout << s << '(' << mp[s] << ')' << endl;
      mp[s]++;
    }
  }

}




