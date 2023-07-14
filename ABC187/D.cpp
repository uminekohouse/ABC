#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll N, A, B; cin >> N >> A >> B;
  ll P, Q, R, S; cin >> P >> Q >> R >> S;
  vector<vector<char>> table(Q-P+1, vector<char>(S-R+1, '.'));
  for(ll i = P; i <= Q; ++i){
    for(ll j = R; j <= S; ++j){
      if(i+j==A+B) table[i-P][j-R] = '#';
      if(i-j==A-B) table[i-P][j-R] = '#';
    }
  }
  for(int i = 0; i < Q-P+1; ++i){
    for(int j = 0; j < S-R+1; ++j){
      cout << table[i][j];
    }
    cout << endl;
  }
}


