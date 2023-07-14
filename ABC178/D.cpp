#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
 int S; cin >> S;
 ll mod = 1000000009; 
 vector<ll> memo(2001, -1);

 function<ll(ll)> func = [&](ll n){
   if(0<=n&&n<=2) return (ll)0;
   else if(n==3) return (ll)1;

   if(memo[n]!=-1) return memo[n];

   ll tmp = 1;
   for(ll i = 3; n-i>=3; ++i)
     tmp = (tmp+func(n-i))%mod;
   return memo[n] = tmp;
 };
 cout << func(S) << endl;

}
