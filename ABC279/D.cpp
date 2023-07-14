#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    double A, B;
    cin >> A >> B;

    double res = 10000000000000.0;
    double ans = 10000000000000.0;
    for(double t = 1.0; t <= 100000000; ++t){
      ans = min(ans, B*(t-1)+A/sqrt(t));
    }
    if(ans != res){
      cout << fixed << setprecision(20) << ans << endl;
      return 0;
    }

    // 目的関数(最小化したい)
    auto f = [&](double t) {
        return B*(t-1.0)+A/sqrt(t);
    };

    // 左側
    ll low = 1;
    // 右側
    ll high = 1LL<<60;


    // 500回繰り返す
    int cnt = 100;
    while (cnt--) {
        int c1 = (low * 2.0 + high) / 3.0;
        int c2 = (low + high * 2.0) / 3.0;

        // もしf(c2)のほうが良い(小さい)なら、駄目な方lowを更新する
        if (f(c1) > f(c2)) low = c1;
        else high = c2;
    }

    cout << fixed << setprecision(20) << f(low) << endl;
} 

