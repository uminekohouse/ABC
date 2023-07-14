#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int main(){
  int N; cin >> N;
  int P[N], Q[N], R[N];
  rep(i, N) cin >> P[i];
  rep(i, N) cin >> Q[i];
  rep(i, N) R[i] = i+1;
  int cnt1, cnt2;
  int cnt = 0;
  do{
    bool flag = true;
    rep(i, N) if(P[i]!=R[i]) flag = false;
    if(flag) cnt1 = cnt;
    flag = true;
    rep(i, N) if(Q[i]!=R[i]) flag = false;
    if(flag) cnt2 = cnt;
    cnt++;
  }while(next_permutation(R, R+N));
  cout << abs(cnt1-cnt2) << endl;
}

