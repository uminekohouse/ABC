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
  int R, C; cin >> R >> C;
  R--; C--;
  vector<vector<int>> A(2, vector<int>(2));
  for(int i = 0; i < 2; ++i){
    for(int j = 0; j < 2; ++j){
      cin >> A[i][j];
    }
  }
  cout << A[R][C] << endl;

}
