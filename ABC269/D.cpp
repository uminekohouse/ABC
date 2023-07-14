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

int N, A, B, C, D;

int main(){
  cin >> N;
  A = 1, B  = 1, C = N, D = N;
  int left = 1, right = N;
  while(left<right){
    int mid = (left+rignt)/2;


