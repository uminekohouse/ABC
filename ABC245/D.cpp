#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, M; cin >> N >> M;
  vector<int> A(N+1, 0), B(M+1, 0), C(N+M+1, 0);
  for(int i = 0; i <= N; ++i) cin >> A[i];
  for(int i = 0; i <= N+M; ++i) cin >> C[i];
  for(int i = M; i >= 0; --i){
    B[i] = C[i+N]/A[N];
    for(int j = N; j >= 0; --j){
      C[i+j] -= A[j]*B[i];
    }
  }
  for(auto p:B) cout << p << endl;
}


