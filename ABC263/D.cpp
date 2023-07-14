#include<bits/stdc++.h>
using namespace std;

int N, L, R;
int A[200009], SL[200009], SR[200009];

int main(){
  cin >> N >> L >> R;
  for(int i = 1; i <= N; ++i) cin >> A[i];
  SL[0] = 0;
  for(int i = 1; i <= N; ++i){
    SL[i] = SL[i-1]+A[i];
    if(SL[i] < L*i) break;
    SL[i] = L*i; A[i] = L;
  }
  SR[N+1] = 0;
  for(int i = N; i <= i; --i){
    SR[i] = SR[i+1]+A[i];
    if(SR[i] < R*(N-i+1)) break;
    SR[i] = R*(N-i+1); A[i] = R;
  }
  long long sum = 0;
  for(int i = 1; i <= N; ++i) sum += A[i];
  cout << sum << endl;
}

