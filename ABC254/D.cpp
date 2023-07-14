#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int N; cin >> N;
  int ans = 0;
  for(int k =  1; k <= N; ++k){
    vector<pair<int, int>> factor;
    int tmp = k;
    int cnt = 0;
    for(int i = 2; i <= k; ++i){
      if(tmp%i==0){
        while(tmp%i==0) tmp/=i, cnt++;
        factor.push_back(make_pair(i, cnt));
      }
    }
    if(tmp!=1) 
        factor.push_back(make_pair(tmp, cnt));
    cout << k*k << endl;
    for(auto p : factor) cout << p.first << " " << p.second*p.second << endl;
    cout << endl;
  }



}



