#include<bits/stdc++.h>
using namespace std;
		

int N, M, A[2009];

int main(){
  cin >> N >> M;
  for(int i = 1; i <= N; ++i) cin >> A[i];
  long long LINF = 1LL<<60;
  vector<vector<long long>> dp(N+1, vector<long long>(M+1, -LINF));








