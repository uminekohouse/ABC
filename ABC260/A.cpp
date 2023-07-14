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
  if(S[0]==S[1]&&S[0]==S[2]) cout << -1 << endl;
  else if(S[0]==S[1]) cout <<S[2] << endl;
  else if(S[0]==S[2]) cout <<S[1] << endl;
  else if(S[1]==S[2]) cout <<S[0] << endl;
  else  cout <<S[0] << endl;
}
