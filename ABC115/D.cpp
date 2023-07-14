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

vector<string> buger;

string func(int N){
  //basecase
  if(N == 0) return "P";
  //check memo
  if(buger[N] != "3") return buger[N];
  string res = "B" + buger[N-1] + "P" + buger[N-1] + "B";
  return buger[N] = res;
}

int main(){
  int N;
  long long X;
  cin >> N >> X;
  buger.assign(51, "3");
  buger[0] = "P";
  cout << func(N) << endl;
}
