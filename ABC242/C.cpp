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
	vector<int> dx = {1, 2, 2, 1, -1, -2, -2, -1};
	vector<int> dy = {2, 1, -1, -2, -2, -1, 1, 2};
	set<pair<int, int>> point1, point2;
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	for(int i = 0; i < 8; ++i){
		point1.insert(make_pair(x1+dx[i], y1+dy[i]));
		point2.insert(make_pair(x2+dx[i], y2+dy[i]));
	}

	for(auto p : point1){
		if(point2.count(p)){
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;

}



