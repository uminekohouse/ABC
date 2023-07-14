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
  vector<vector<int>> A(30, vector<int>());
  for(int i = 0; i < N; ++i){
    for(int j = 0; j < i+1; ++j){
      if(i==j){
        A[i].push_back(1);
        cout << 1 << endl;
      }
      else if(j==0){
        A[i].push_back(1);
        cout << 1 << " ";
      }
      else{
        int tmp = A[i-1][j-1] + A[i-1][j];
        A[i].push_back(tmp);
        cout << tmp << " ";
      }
    }
  }
}
