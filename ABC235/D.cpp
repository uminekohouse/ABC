#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll a, N; cin >> a >> N;

  unordered_map<ll, ll> mp;
  queue<int> que;
  auto func = [&](ll v, ll d){
    if(mp.count(v)) return;
    mp[v] = d;
    que.push(v);
  };
  func(1, 0);

  while(!que.empty()){
    ll v = que.front(); que.pop();
    if(v*a<10*N) func(v*a, mp[v]+1);
    if(v>=10 && v%10!=0){
      string s = to_string(v);
      int len = s.size();
      rotate(s.begin(), s.begin()+len-1, s.end());
      ll nv = stoi(s);
      func(nv, mp[v]+1);
    }
  }
  if(mp.count(N)) cout << mp[N] << endl;
  else cout << -1 << endl;
}





