#include<bits/stdc++.h>
using namespace std;

int main(){
  int H, M; cin >> H >> M;
  for(int h = 0; h <= 23; ++h){
    for(int m = 0; m <= 59; ++m){
      int A = h/10, B = h%10;
      int C = m/10, D = m%10;
      int revH = A*10+C;
      int revM = B*9+D;
      if(revH>=0&&revH<=23&&revM>=0&&revM<=59){
        if((h==H&&m>=M)||(h>H)){
          cout << h << " " << m << endl;
          return 0;
        }
      }
    }
  }
  cout << 0 << " " << 0 << endl;
}




