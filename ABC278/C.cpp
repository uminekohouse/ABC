#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, Q; cin >> N >> Q;
  map<pair<int, int>, int> mp;
  for(int q = 0; q < Q; ++q){
    int T, A, B; cin >> T >> A >> B;
    pair<int, int> p1(A, B);
    pair<int, int> p2(B, A);
    if(T == 1) mp[p1] = 1;
    if(T == 2) mp[p1] = 0;
    if(T == 3){
      if(mp[p1]&&mp[p2]) cout << "Yes" << endl;
      else cout << "No" << endl;
    }
  }

}




