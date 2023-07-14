#include<bits/stdc++.h>
using namespace std;
using ll = long long;


ll Q, c, x, k;
int main(){
  multiset<ll> st;
  cin >> Q;
  for(int q = 0; q < Q; ++q){
    bool flag =  true;
    cin >> c; 
    if(c==1){
      cin >> x;
      st.insert(x);
    }
    if(c==2){
      cin >> x >> k;
      auto iter = st.upper_bound(x);
      for(int i = 0; i < k; ++i){
        if(iter == st.begin()){flag = false; break;}
        iter--; 
      }
      cout << (flag ? *iter : -1) << endl;
    }
    if(c==3){
      cin >> x >> k;
      auto iter = st.lower_bound(x);
      for(int i = 0; i < k-1; ++i){
        if(iter == st.end()){flag = false; break;}
        iter++;
      }
      cout << ((flag&&iter!=st.end()) ? *iter : -1) << endl;
    }
  }
}

