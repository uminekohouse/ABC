#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, M; cin >> N >> M;
  map<int, int> A;
  map<int, int> B;
  for(int i = 0; i < N; ++i){int a; cin >> a; A[a]++;} 
  for(int i = 0; i < M; ++i){int b; cin >> b; B[b]++;} 

  bool OK = true;
  for(auto p : B){
    auto B_key = p.first;
    auto B_value = p.second;
    if(!A.count(B_key)){
      OK = false;
      break;
    }
    else{
      int A_value = A[B_key];
      if(A_value < B_value){
        OK = false;
        break;
      }
    }
  }
  if(OK) cout << "Yes" << endl;
  else cout << "No" << endl;


}





