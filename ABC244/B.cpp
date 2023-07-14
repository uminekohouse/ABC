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
  int N; string S; cin >> N >> S;
  int x = 0, y = 0;
  int direct = 0;
  for(int i = 0; i < N; ++i){
    if(S[i] == 'S'){
      if(direct == 0) x++;
      if(direct == 1) y--;
      if(direct == 2) x--;
      if(direct == 3) y++;
    }
    else direct = (direct+1)%4;
  }
  cout << x << " " << y << endl;
}






