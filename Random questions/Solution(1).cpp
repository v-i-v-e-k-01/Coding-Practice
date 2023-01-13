#include <bits/stdc++.h>
using namespace std;
#if __cplusplus > 201703L
#include <ranges>
using namespace numbers;
#endif



int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin.exceptions(ios::badbit | ios::failbit);
	auto __solve_tc = [&](auto __tc_num)->int{
		auto get = [&]()->vector<long long>{
			int n;
			cin >> n;
			vector<int> a(n);
			copy_n(istream_iterator<int>(cin), n, a.begin());
			vector<long long> pref(n + 1);
			for(auto i = 0; i < n; ++ i){
				pref[i + 1] = pref[i] + a[i];
			}
			vector<long long> res(n + 1);
			for(auto k = 0; k <= n; ++ k){
				for(auto l = 0; l <= k; ++ l){
					int r = k - l;
					res[k] = max(res[k], pref[l] + pref[n] - pref[n - r]);
				}
			}
			return res;
		};
		auto a = get();
		auto b = get();
		long long res = 0;
		int k;
		cin >> k;
		for(auto x = 0; x < (int)a.size(); ++ x){
			int y = k - x;
			if(0 <= y && y < (int)b.size()){
				res = max(res, a[x] + b[y]);
			}
		}
		cout << res << "\n";
		return 0;
	};
	int __tc_cnt;
	cin >> __tc_cnt;
	for(auto __tc_num = 0; __tc_num < __tc_cnt; ++ __tc_num){
		cout << "Case #" << __tc_num + 1 << ": ";
		__solve_tc(__tc_num);
	}
	return 0;
}

/*

*/

////////////////////////////////////////////////////////////////////////////////////////
//                                                                                    //
//                                   Coded by Aeren                                   //
//                                                                                    //
////////////////////////////////////////////////////////////////////////////////////////