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
  long long N; cin >> N;
  long long left = 0, right = 100100;
  while(right-left>1){
    long long mid = (left + right)/2;
    string S = to_string(mid) + to_string(mid);
    long long num = stoll(S);
    if(num <= N) left = mid;
    else right = mid;
  }
  cout << left << endl;
}




