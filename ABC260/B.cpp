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
  int N, X, Y, Z;
  cin >> N >> X >> Y >> Z;
  vector<int> math(N), eng(N);
  for(int i = 0; i < N; ++i) cin >> math[i];
  for(int i = 0; i < N; ++i) cin >> eng[i];
  vector<pair<int, int>> math_sort;
  vector<pair<int, int>> eng_sort;
  vector<pair<int, int>> sum_sort;
  for(int i = 0; i < N; ++i){
    int math_p = math[i], eng_p = eng[i];
    math_sort.push_back({math_p, -1*i});
    eng_sort.push_back({eng_p, -1*i});
    sum_sort.push_back({math_p+eng_p, -1*i});
  }
  sort(math_sort.rbegin(), math_sort.rend());
  sort(eng_sort.rbegin(), eng_sort.rend());
  sort(sum_sort.rbegin(), sum_sort.rend());
  
  vector<bool> safe_list(N, false);
  int no;

  for(auto p : math_sort){
    if(X==0) break;
    no = p.second*-1;
    if(!safe_list[no]){
      safe_list[no] = true;
      X--;
    }
  }

  for(auto p : eng_sort){
    if(Y==0) break;
    no = p.second*-1;
    if(!safe_list[no]){
      safe_list[no] = true;
      Y--;
    }
  }

  for(auto p : sum_sort){
    if(Z==0) break;
    no = p.second*-1;
    if(!safe_list[no]){
      safe_list[no] = true;
      Z--;
    }
  }
  for(int i = 0; i < N; ++i){
    if(safe_list[i]) cout << i+1 << endl;
  }
}

    
    

    





