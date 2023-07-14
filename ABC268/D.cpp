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

bool is_prime(int N){
	if (N == 1) return false;
    for (int i = 2; i * i <= N; ++i) {
        if (N % i == 0) return false;
    }
    return true;
}

int main(){
	vector<bool> prime(200+1, false);
	for(int i = 1; i <= 200; ++i){
		if(is_prime(i)) prime[i] = true;
	}
	vector<int> prime_sum(202, 0);
	for(int i = 0; i < 201; ++i){
	   	prime_sum[i+1] = prime_sum[i];
		if(prime[i+1]) prime_sum[i+1]++;
	}	
	int A, B, C, D;
	cin >> A >> B >> C >> D;

	if(C==D){
		for(int i = A; i <= A; ++i){
			if(prime[i+C]){
				cout << "Aoki" << endl;
				return 0;
			}
		}
		cout << "Takahashi" << endl;
		return 0;
	}


	
	for(int i = A; i <= B; ++i){
		int tmp = prime_sum[i+D+1] - prime_sum[i+C];
		if(tmp == 0){
			cout << "Takahashi" << endl;
			return 0;
		}
	}
	cout << "Aoki" << endl;
	return 0;
}
		






