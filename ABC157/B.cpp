#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rep(i,n) for(int i = 0; i < (n); ++i)


bool func(vector<vector<int>> A){
    bool res = false;
    if(A[0][0]==0&&A[1][1]==0&&A[2][2]==0) res = true;
    if(A[0][3]==0&&A[1][1]==0&&A[2][0]==0) res = true;
    for(int i = 0; i < 3; ++i){
      if(A[i][0]==0&&A[i][1]==0&&A[i][2]==0) res = true;
      if(A[0][i]==0&&A[1][i]==0&&A[2][i]==0) res = true;
    }
    return res;
}




int main(){
  vector<vector<int>> A(3, vector<int>(3));
  bool flag = false;
  for(int i = 0; i < 3; ++i) for(int j = 0; j < 3; ++j) cin >> A[i][j];
  int N;
  cin >> N;
  for(int i = 0; i < N; ++i){
    int b; cin >> b;
    for(int j = 0; j < 3; ++j){
      for(int k = 0; k < 3; ++k){
        if(A[j][k]==b) A[j][k] = 0;
      }
    }
    if(func(A)) flag = true;
  }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
}

