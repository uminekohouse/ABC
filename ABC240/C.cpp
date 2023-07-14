#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, X; cin >> N >> X;
  vector<int> A(N), B(N); for(int i = 0; i < N; ++i) cin >> A[i] >> B[i];
  unordered_set<int> st; st.insert(0);
  for(int i = 0; i < N; ++i){
    unordered_set<int> new_st;
    for(auto s : st){
      new_st.insert(s+A[i]);
      new_st.insert(s+B[i]);
    }
    swap(st, new_st);
  }
  if(st.count(X)) cout << "Yes" << endl;
  else cout << "No" << endl;
}
