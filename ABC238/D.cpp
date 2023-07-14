#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll T; cin >> T;
  for(int t = 0; t < T; ++t){
    ll a, s; cin >> a >> s;
    ll tmp = s;
    while(tmp%2==0) tmp /= 2;
    if(s!=1&&tmp==1) s--;
    string A = bitset<64>(a).to_string();
    string S = bitset<64>(s).to_string();
    cout << A << endl;
    cout << S << endl;
    bool ok = true;
    for(int i = 0; i < 64; ++i) if(A[i]=='1'&&S[i]=='0') ok = false;
    cout << ok << endl;
    cout << (ok ? "Yes" : "No" ) << endl;
  }
}




