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
  if(N==0){
    cout << "00" << endl;
    return 0;
  }
  string ans;
  while(N!=0){
    int num = N % 16;
    N /= 16;
    if(num < 10) ans.push_back('0'+num);
    else ans.push_back('A'+num-10);
  }
  reverse(ans.begin(), ans.end());
  if(ans.size()==1) cout << 0 << ans << endl;
  else cout << ans << endl;


}
