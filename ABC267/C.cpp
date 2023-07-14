#include<bits/stdc++.h>
#include<iostream>
using namespace std;
template<class T>void chmin(T&a, T b){if(a > b) a = b;}
template<class T>void chmax(T&a, T b){if(a < b) a = b;}

long long N, M, A[200009], S[200008], B;
int main(){
  cin >> N >> M;
  for(int i = 1; i <= N; ++i) cin >> A[i];
  //累積和
  S[0] = 0;
  for(int i = 1; i <= N; ++i) S[i] = S[i-1]+A[i];

  B = 0;
  for(int i = 1; i <= M; ++i) B += A[i]*i;
  long long ans = B;
  for(int i = 1; i + M <= N; ++i){
    B -= S[i+M-1] - S[i-1];
    B += A[i+M] * M;
    ans = max(ans, B);
  }
  cout << ans << endl;
}










