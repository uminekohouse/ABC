#include<bits/stdc++.h>
using namespace std;

int N, M;

int main(){
  cin >> N >> M;
  set<vector<int>> st;
  for(int bit = 0; bit < 1<<M; ++bit){
    vector<int> A;
    for(int i = 0; i < M; ++i) if(bit&1<<i) A.push_back(i+1);
    if(A.size()==N) st.insert(A);
  }
  for(auto s : st) for(auto a : s) cout << a << endl;
}
    

