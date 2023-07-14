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
  int a, b, c;
  a = S[0] - '0'; 
  b = S[1] - '0'; 
  c = S[2] - '0'; 
  int res = (a+b+c)*111;
  cout << res << endl;
}
