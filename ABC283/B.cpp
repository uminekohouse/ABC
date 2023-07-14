#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<int> A(N+1);
  for(int i = 1; i <= N; ++i) cin >> A[i];
  int Q; cin >> Q;
  for(int i = 0; i < Q; ++i){
    int c; cin >> c;
    if(c==1){
      int k, x; cin >> k >> x;
      A[k] = x;
    }
    if(c==2){
      int k; cin >> k;
      cout << A[k] << endl;
    }
  }
}




