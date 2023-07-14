#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<int> A(N); for(int i = 0; i < N; ++i) cin >> A[i];
  vector<vector<int>> B(K, vector<int>());
  for(int i = 0; i < N; ++i) B[i%K].push_back(A[i]);
  for(int i = 0; i < K; ++i) sort(B[i].rbegin(), B[i].rend());
  vector<int> new_A;
  for(int i = 0; i < N; ++i){
    int tmp = B[i%K].back();
    B[i%K].pop_back();
    new_A.push_back(tmp);
  }
  sort(A.begin(), A.end());
  bool flag = true;
  for(int i = 0; i < N; ++i) if(A[i]!=new_A[i]) flag = false;
  cout << (flag?"Yes":"No") << endl; 

}


