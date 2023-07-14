#include<bits/stdc++.h>
using namespace std;
using ll = long long;
double A, B;

double func(ll t){
  double ans=B*(t-1)+A/sqrt(t);
  return ans;
}

int main(){
  cin >> A >> B;
  ll left = 0;
  ll right = 1000000;
  while(right-left>1) {
    ll mid_l = left*2/3+right/3;
    ll mid_r = left/3+right*2/3;
    if(func(mid_l)<func(mid_r)){
            right = mid_r;
        }else {
            left = mid_l;
        }
    }
  cout<<func(right)<<endl;
  return 0;
}
