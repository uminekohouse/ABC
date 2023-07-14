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
  string S, T; cin >> S >> T;
  map<char, vector<int>> char_mapS, char_mapT;
  for(int i = 0; i < S.size(); ++i){
    char_mapS[S[i]].push_back(i);
    char_mapT[T[i]].push_back(i);
  }

  vector<int> A(5, 0);
  for(auto p : A)
    cout << "a" << endl;

}
