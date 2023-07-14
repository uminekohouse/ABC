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
#ifndef M_PI
#define M_PI 3.14159265358979
#endif
#define deg_to_rad(deg) (((deg)/360)*2*M_PI);
#define rad_to_deg(rad) (((rad)/2/M_PI)*360);

int main(){
  int N; cin >> N;
  vector<int> A(N); 
  for(int i = 0; i < N; ++i) cin >> A[i];
  vector<int> base(4, 0);
  int P = 0;
  for(int i = 0; i < N; ++i){
    base[0]++;
    for(int j = 3; j >= 0; --j){
      if(base[j]!=0){
        base[j]--;
        if(j+A[i]<4) base[j+A[i]]++;
        else P++;
      }
    }
  }
  cout << P << endl;

}
