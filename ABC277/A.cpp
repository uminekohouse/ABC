#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, X; cin >> N >> X;
  vector<int> A(N+1); for(int i = 1; i <= N; ++i) cin >> A[i];
  for(int i = 1; i <= N; ++i){
    if(A[i]==X){
      cout << i << endl;
      return 0;
    }
  }
}

