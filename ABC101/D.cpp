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

long long S(long long N){
  long long res = 0;
  while(N){
    res += N%10;
    N /= 10;
  }
  return res;
}

int main(){
  long long K; cin >> K;
  for(long long i = 1; i <= K; ++i){
    cout << "i : " << i ;
    double res = i/S(i)*1.0;
    cout << ", sunuke : " << res << endl;
  }

}
		



