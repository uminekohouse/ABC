#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()
#define rep(i,n) for(int i = 0; i < (n); ++i)

int main(){
  int N, M; cin >> N >> M;
  cout << N*(N-1)/2 + M*(M-1)/2 << endl;
}

