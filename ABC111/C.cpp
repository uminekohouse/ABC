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
  int n; cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; ++i) cin >> v[i];
  map<int, int> even, odd;
  for(int i = 0; i < n; i += 2) even[v[i]]++;
  for(int i = 1; i < n; i += 2) odd[v[i]]++;
  vector<pair<int, int>> even_list, odd_list;
  for(auto p : even) even_list.push_back(make_pair(p.second, p.first));
  for(auto p : odd) odd_list.push_back(make_pair(p.second, p.first));
  sort(even_list.rbegin(), even_list.rend());
  sort(odd_list.rbegin(), odd_list.rend());
  long long ans = 0;
  if(even_list[0].second != odd_list[0].second)
    ans += n-even_list[0].first-odd_list[0].first;
  else{
    ans += n-max(even_list[1].first+odd_list[0].first,
        even_list[0].first+odd_list[1].first);
  }
  cout << ans << endl;




  


}
