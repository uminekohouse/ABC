#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main(){
  int N, K; 
  cin >> N >> K;
  vector<int> P(N+1, 0);
  for(int i = 1; i <= N; ++i) cin >> P[i];
  set<int> field;
  set<set<int>> group;
  vector<int> next_card(N+1, -1);
  vector<int> card_cnt(N+1, 0);
  vector<int> ans(N+1, -1);

  for(int i = 1; i <= N; ++i){
    auto iter = field.lower_bound(P[i]);
    if(iter == field.end()){
      field.insert(P[i]);
      card_cnt[P[i]] = 1;
    }
    else{
      next_card[P[i]] = *iter;
      card_cnt[P[i]] = card_cnt[*iter]+1;
      field.erase(iter);
      field.insert(P[i]);
    }
    if(card_cnt[P[i]]==K){
      field.erase(iter);
      int now = P[i], prev = next_card[P[i]];
      while(now!=-1){
        ans[now] = i;
        now = prev;
        prev = next_card[now];
      }
    }
  }
  for(int i = 1; i <= N; ++i) cout << ans[i] << endl;
}




