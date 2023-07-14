#include<bits/stdc++.h>
using namespace std;

int main(){
  int H1, W1; cin >> H1 >> W1;
  vector<vector<int>> A(H1, vector<int>(W1));
  for(int i = 0; i < H1; ++i){
    for(int j = 0; j < W1; ++j) cin >> A[i][j];
  }
  int H2, W2; cin >> H2 >> W2;
  vector<vector<int>> B(H2, vector<int>(W2));
  for(int i = 0; i < H2; ++i){
    for(int j = 0; j < W2; ++j) cin >> B[i][j];
  }
  for(int row = 0; row < (1<<H1); ++row){
    for(int col = 0; col < (1<<W1); ++col){
      vector<int> row_vec, col_vec;
      for(int i = 0; i < H1; ++i) if(row&1<<i) row_vec.push_back(i);
      for(int i = 0; i < W1; ++i) if(col&1<<i) col_vec.push_back(i);
      if(row_vec.size()!=H2||col_vec.size()!=W2) continue;

      bool check = true;
      for(int i = 0; i < H2; ++i){
        for(int j = 0; j < W2; ++j){
          if(A[row_vec[i]][col_vec[j]]!=B[i][j]) check = false;
        }
      }
      if(check){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
          

          

      





