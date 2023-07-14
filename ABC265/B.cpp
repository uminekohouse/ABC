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
  LL N, M, T; cin >> N >> M >> T;
  vector<LL> A(N-1);
  for(int i = 0; i < N-1; ++i) cin >> A[i];
  for(int i = 0; i < M; ++i){
    int X, Y; cin >> X >> Y;
    A[X-1] -= Y;
  }
  for(auto a : A){
    T -= a;
    //cout << T << endl;
    if(T<=0){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;

}    






