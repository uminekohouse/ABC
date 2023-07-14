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
  long long N, A, B; cin >> N >> A >> B;
  long long sum = (1+N)*N/2;
  //cout << sum << endl;
  long long A_cnt = N/A;
  long long A_sum = (A+A*A_cnt)*A_cnt/2;
  //cout << A_sum << endl;
  long long B_cnt = N/B;
  long long B_sum = (B+B*B_cnt)*B_cnt/2;
  //cout << B_sum << endl;
  long long C = lcm(A, B);
  long long C_cnt = N/C;
  long long C_sum = (C+C*C_cnt)*C_cnt/2;
  //cout << C_sum << endl;
  long long ans = sum - A_sum - B_sum + C_sum;
  cout << ans << endl;
}






