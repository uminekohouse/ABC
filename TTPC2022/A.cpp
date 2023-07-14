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

long long X, Y;
int main(){
  cin >> X >> Y;
  vector<long long> ans;

  X -= 2015; Y -= 2015;
  for(int i = 1; i*i <= min(X,Y); ++i){
    if(X%i==0&&Y%i==0) ans.push_back(
  for(auto s : X_set){
    if(Y%s==0) cout << s << endl;
  }
}
   




