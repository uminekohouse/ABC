#include<bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  auto is_prime = [](int num){
    for(int i = 2; i*i <= num; ++i){
      if(num%i==0) return false;
    }
    return true;
  };
  for(int i = A; i <= B; ++i){
    bool flag = false;
    for(int j = C; j <= D; ++j){
      int num = i+j;
      if(is_prime(num)) flag = true;
    }
    if(!flag){
      cout << "Takahashi" << endl;
      return 0;
    }
  }
  cout << "Aoki" << endl;
  return 0;
}
