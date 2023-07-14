#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int Q; cin >> Q; 
  for(int q = 0; q < Q; ++q){
    int N; cin >> N;
    vector<int> A(N+1); for(int i = 1; i <= N; ++i) cin >> A[i];
    map<int, vector<int>> mp;
    for(int i = 1; i <= N; ++i) mp[A[i]%2].push_back(i);
    if(mp[1].size()>=3){
      cout << "Yes" << endl;
      cout << mp[1][0] << " " << mp[1][1] << " " << mp[1][2] << endl;
    }
    else if(mp[0].size()>=2&&mp[1].size()>=1){
      cout << "Yes" << endl;
      cout << mp[0][0] << " " << mp[0][1] << " " << mp[1][0] << endl;
    }
    else{
      cout << "No" << endl;
    }
  }
}

