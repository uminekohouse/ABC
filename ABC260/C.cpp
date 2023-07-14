#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll N, X, Y;
int main(){
  cin >> N >> X >> Y;
  ll red = 1, blue = 0;
  for(int i = N; i >= 2; --i){
    blue += X*red;
    red += blue;
    blue = Y*blue;
  }
  cout << blue << endl;
    
}




