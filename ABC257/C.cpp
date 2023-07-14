#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  string S; cin >> S;
  vector<int> W(N); for(int i = 0; i < N; ++i) cin >> W[i];
  vector<int> child, adult;
  for(int i = 0; i < N; ++i){
    if(S[i]=='0') child.push_back(W[i]);
    else adult.push_back(W[i]);
  }
  sort(W.begin(), W.end());
  sort(child.begin(), child.end());
  sort(adult.begin(), adult.end());
  
  int ans = 0;
  if(child.size()==0||adult.size()==0){
    cout << max(child.size(), adult.size()) << endl;
    return 0;
  }
  auto func = [&](int x){
    int child_num, adult_num;
    child_num = lower_bound(child.begin(),child.end(),x)-child.begin();
    adult_num = adult.end()-lower_bound(adult.begin(),adult.end(),x);
    return child_num+adult_num;
  };
  for(int i = 0; i < N; ++i){
    ans = max(ans, func(W[i]));
  }
  cout << ans << endl;
}



