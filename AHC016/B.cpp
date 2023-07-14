#include<bits/stdc++.h>
using namespace std;

int main(){
  bitset<6> tmp;
  for(int i = 0; i < 1<<6; ++i){
    tmp = i;
    cout << tmp << endl;
  }
}
