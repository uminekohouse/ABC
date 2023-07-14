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
  vector<bool> A(2*N+2, false);
  while(1){
    for(int i = 1; i <= 2*N+1; ++i){
      if(A[i]==false){
        cout << i << endl;
        A[i] = true;
        break;
      }
    }
    int n; cin >> n;
    if(n == 0) return 0;
    A[n] = true;
  }
}




