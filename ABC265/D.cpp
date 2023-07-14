#include<bits/stdc++.h>
using namespace std;

long long N, B[3], A[200009], S[200009];

int main(){
  cin >> N; 
  for(int i = 0; i < 3; ++i) cin >> B[i];
  for(int i = 1; i <= N; ++i) cin >> A[i];
  S[0] = 0;
  for(int i = 1; i <= N; ++i) S[i] = S[i-1]+A[i];
  unordered_set<long long> st;
  for(int i = 0; i <= N; ++i) st.insert(S[i]);
  
  for(int i = 0; i <= N; ++i){
    long long tmp = S[i];
    for(int j = 0; j < 3; ++j){
      tmp += B[j];
      if(!st.count(tmp)) break;
      if(j==2){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
