#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll Q; cin >> Q;
  map<ll, vector<ll>> mp;
  vector<ll> A;
  auto func = [&](string S){
    if(S=="ADD"){
      ll x; cin >> x;
      A.push_back(x);
    }
    if(S=="DELETE"){
      if(A.size()>0) A.pop_back();
    }
    if(S=="SAVE"){
      ll y; cin >> y;
      copy(A.begin(), A.end(), back_inserter(mp[y]));
    }
    if(S=="LOAD"){
      ll z; cin >> z;
      A = move(mp[z]);
    }
  };
  for(ll q = 0; q < Q; ++q){
    string S; cin >> S;
    func(S);
    cout << (A.size()==0 ? -1 : A[A.size()-1]) << endl;
  }
}
