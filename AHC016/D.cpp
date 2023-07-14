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



long long N;
unordered_map<long long, long long> mp;

long long func(long long x){
  if(x==0) return 1;

  if(mp.count(x)) return mp[x];

  long long res = func(x/2) + func(x/3);
  mp[x] = res;
  return res;

}

int main(){
  cin >> N;
  cout << func(N) << endl;
}


  

