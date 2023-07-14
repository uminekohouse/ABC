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



long long mod = 998244353;

long long func(vector<long long> vec){
  long long res = 1;
  x %= mod; y %= mod; z %= mod;
  res = (res*x)%mod;
  res = (res*y)%mod;
  res = (res*z)%mod;
  return res;
}

int main(){
  cin >> A >> B >> C >> D >> E >> F;
  long long res = func(A,B,C)-func(D,E,F);
  if(res < 0) res += mod;
  res %= mod;
  cout << res << endl;
}





