#include<bits/stdc++.h>
using namespace std;



int main(){
  string S; cin >> S;
  vector<int> upper_cnt(26, 0);
  vector<int> lower_cnt(26, 0);
  for(auto c : S){
    if(0<=(c-'a')&&(c-'a')<=25) lower_cnt[c-'a']++;
    else upper_cnt[c-'A']++;
  }
  bool upper = false, lower = false;
  for(auto p : upper_cnt){
    if(p) upper = true;
    if(p>=2){
      cout << "No" << endl;
      return 0;
    }
  }
  for(auto p : lower_cnt){
    if(p) lower = true;
    if(p>=2){
      cout << "No" << endl;
      return 0;
    }
  }
  if(upper&&lower) cout << "Yes" << endl;
  else cout << "No" << endl;
}

