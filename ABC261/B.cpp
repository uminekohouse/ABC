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
  vector<string> A(N);
  for(int i = 0; i < N; ++i) cin >> A[i];
  bool flag = true;
  for(int i = 0; i < N; ++i){
    for(int j = 0; j < N; ++j){
      if(i==j&&A[i][j]!='-') flag = false;
      if(i!=j&&A[i][j]=='-') flag = false;
      if(A[i][j]=='W') if(A[j][i]!='L') flag = false;
      if(A[i][j]=='L') if(A[j][i]!='W') flag = false;
      if(A[i][j]=='D') if(A[j][i]!='D') flag = false;
    }
  }
  if(flag) cout << "correct" << endl;
  else cout << "incorrect" << endl;
}    






