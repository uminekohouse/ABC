#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, A, B; cin >> N >> A >> B;
  vector<vector<char>> field(A*N, vector<char>(B*N));
  for(int i = 0; i < N; ++i){
    for(int j = 0; j < N; ++j){
      for(int k = 0; k < A; ++k){
        for(int l = 0; l < B; ++l){
          if((i+j)%2==0) field[i*A+k][j*B+l] = '.';
          else field[i*A+k][j*B+l] = '#';
        }
      }
    }
  }
  for(int i = 0; i < A*N; ++i){
    for(int j = 0; j < B*N; ++j){
      cout << field[i][j];
    }
    cout << endl;
  }
}
