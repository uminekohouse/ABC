#include<bits/stdc++.h>
#include<iostream>
using namespace std;
using LL = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
const long long LINF = 1LL << 60;
#define all(x) (x).begin(), (x).end()
#define rep(i,n) for(int i = 0; i < (n); ++i)
template<class T>void chmin(T&a, T b){if(a > b) a = b;}
template<class T>void chmax(T&a, T b){if(a < b) a = b;}

int main(){
  int N, Q; cin >> N >> Q;
  vector<int> val(N), pos(N);
  for(int i = 0; i < N; ++i){
   pos[i] = i; val[i] = i;
  }
  for(int q = 0; q < Q; ++q){
    int num;
    cin >> num;
    num--;
    int A_num = num;
    int A_pos = pos[A_num];
    int B_num, B_pos;
    if(A_pos == N-1){
      B_num = val[A_pos-1];
      B_pos = pos[B_num];
    }
    else{
      B_num = val[A_pos+1];
      B_pos = pos[B_num];
    }
    pos[B_num] = A_pos;
    pos[A_num] = B_pos;
    val[A_pos] = B_num;
    val[B_pos] = A_num;
  }

  for(int i = 0; i < N; ++i){
    if(i!=N-1){
      cout << val[i] +1 << " ";
    }
    else cout << val[i]+1 << endl;
  }



}


