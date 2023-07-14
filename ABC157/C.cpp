#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()
#define rep(i,n) for(int i = 0; i < (n); ++i)

int main(){
  int N, M; cin >> N >> M;
  vector<bool> check(N+1, false);
  vector<int> num(N+1, 0); num[1] = 1;
  if(M==0){
    int ans = 0;
    if(N==1) num[1] = 0;
    for(int i = 0; i <= N; ++i) ans *= 10, ans += num[i];
    cout << ans << endl;
    return 0;
  }
  for(int i = 0; i < M; ++i){
    int s, c; cin >> s >> c;
    if((s==1&&c==0&&N!=1)||(check[s]&&num[s]!=c)){
      cout << -1 << endl;
      return 0;
    }
    check[s] = true;
    num[s] = c;
  }
  int ans = 0;
  for(int i = 0; i <= N; ++i) ans *= 10, ans += num[i];
  cout << ans << endl;

}

