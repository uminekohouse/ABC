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
  int N = 100;
  vector<int> f(100); for(int i = 0; i < N; ++i) cin >> A[i];
  vector<char> res(100);
  int p;
  for(int i = 0; i < N; ++i){
    cin >> p[i];
    if(f[i]==1) res[i] = 'L';
    if(f[i]==2){
     if(i%2==0) res[i] = 'F';
     else res[i] = 'B';
    }
    if(f[i]==3) res[i] = 'R';
    cout << res[i] << endl;
  }
}

