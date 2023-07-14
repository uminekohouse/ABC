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
  string S; cin >> S;
  bool flag = false;
  vector<int> pins(7, 1);
  if(S[6]=='0') pins[0] = 0;
  if(S[3]=='0') pins[1] = 0;
  if(S[1]=='0'&&S[7]=='0') pins[2] = 0;
  if(S[0]=='0'&&S[4]=='0') pins[3] = 0;
  if(S[2]=='0'&&S[8]=='0') pins[4] = 0;
  if(S[5]=='0') pins[5] = 0;
  if(S[9]=='0') pins[6] = 0;

  for(int i = 0; i < 5; ++i){
    for(int j = i+1; j < 6; ++j){
      for(int k = j+1; k < 7; ++k){
        if(S[0]=='0'&&pins[i]==1&&pins[j]==0&&pins[k]==1) flag = true;
      }
    }
  }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;

}    






