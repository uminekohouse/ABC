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

int N, T;

int main(){
  cin >> N;
  auto output = [&](int A, int B, int C, int D){
    printf("? %d %d %d %d\n", A, B, C, D);
    fflush(stdout);
    cin >> T;
    return T;
  };

  int left = 1, right = N, front = 1, back = N;
  int mid, cnt;
  while(left != right){
    mid = (left+right)/2;
    cnt = output(1, N, left, mid);
    if(cnt == mid-left+1) left = mid+1;
    else right = mid;
  }
  while(front != back){
    mid = (front+back)/2;
    cnt = output(front, mid, 1, N);
    if(cnt == mid-front+1) front = mid+1;
    else back = mid;
  }
  cout << '!' << " " << front << " " << left << endl;
}
