#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<int> X(N), Y(N);
  for(int i = 0; i < N; ++i) cin >> X[i] >> Y[i];
  string S; cin >> S;
  map<int, vector<pair<int, char>>> mp;
  for(int i = 0; i < N; ++i)
    mp[Y[i]].push_back(make_pair(X[i],S[i]));
  for(auto p : mp){
    auto vec = p.second;
    sort(vec.begin(), vec.end());
    bool flagR = false, flagL = false;
    for(auto q : vec){
      if(q.second == 'R') flagR = true;
      if(q.second == 'L' && flagR) flagL = true;
    }
    if(flagR&&flagL){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
