#include<bits/stdc++.h>
using namespace std;
using ll = long long; 
using pll = pair<ll, ll>;

ll Q, num, c, x;

int main(){
  cin >> Q;
  vector<pll> vec;
  int now = 0;
  for(int q = 0; q < Q; ++q){
    cin >> num;
    if(num==1){
      cin >> x >> c;
      vec.push_back(make_pair(x, c));
    }
    if(num==2){
      cin >> c;
      ll ans = 0;
      while(c){
        pll tmp = vec[now];
        ans += tmp.first * min(tmp.second, c);
        vec[now].second -= min(tmp.second, c);
        c -= min(tmp.second, c);
        if(vec[now].second==0) now++;
      }
      cout << ans << endl;
    }
  }
}

