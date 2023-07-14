#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<int> vec(200009, 0);
  for(int i = 0; i < N; ++i){
    int L, R; cin >> L >> R;
    vec[L]++; vec[R]--;
  }
  vector<int> S(200009, 0);
  for(int i = 1; i < 200009; ++i) S[i] = S[i-1] + vec[i];
  for(int i = 0; i < 200009-1; ++i){
    if(S[i-1]==0&&S[i]!=0) cout << i << " ";
    else if(S[i-1]!=0&&S[i]==0) cout << i <<  endl;
  }

}

