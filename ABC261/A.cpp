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
  int L1, R1; cin >> L1 >> R1;
  int L2, R2; cin >> L2 >> R2;
  if(R1<=L2||R2<=L1) cout << 0 << endl;
  else if(L1<=L2) cout << min(R1, R2) - L2 << endl;
  else cout << min(R1,R2)-L1 << endl;
}
