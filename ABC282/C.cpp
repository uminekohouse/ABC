#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  string S; cin >> S;
  vector<int> A, B;
  for(int i = 0; i < N; ++i)
    if(S[i]=='"') A.push_back(i);
  A.push_back(N);
  A.push_back(N+1);
  
  int r = 0, l = 1;
  for(int i = 0; i < N; ++i){
    if(i<A[r]&&S[i]==',') S[i] = '.';
    cout << S[i];
    if(i==A[l]) r += 2, l += 2;
  }
  cout << endl;
}




