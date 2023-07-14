#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()
#define rep(i,n) for(int i = 0; i < (n); ++i)

bool func(string S){
  string T = S;
  reverse(all(S));
  if(S==T) return true;
  else return false;
}

int main(){
  string S; cin >> S;
  int N = S.size();
  bool flag = true;
  if(!func(S)) flag = false;
  string T = S.substr(0, (N-1)/2);
  //cout << T << endl;
  if(!func(T)) flag = false;
  T = S.substr((N+3)/2-1, N-(N+3)/2+1);
  if(!func(T)) flag = false;
  //cout << T << endl;
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
}

