#include <bits/stdc++.h>
using namespace std;
#if __cplusplus > 201703L
#include <ranges>
using namespace numbers;
#endif
template<class T> T &ctmin(T &x){ return x; }
template<class T, class Head, class ...Tail> T &ctmin(T &x, const Head &h, const Tail &... t){ return ctmin(x = min<T>(x, h), t...); }
template<class T> T &ctmax(T &x){ return x; }
template<class T, class Head, class ...Tail> T &ctmax(T &x, const Head &h, const Tail &... t){ return ctmax(x = max<T>(x, h), t...); }



int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin.exceptions(ios::badbit | ios::failbit);
	auto __solve_tc = [&](auto __tc_num)->int{
		int n;
		cin >> n;
		vector<int> a(n);
		copy_n(istream_iterator<int>(cin), n, a.begin());
		int m;
		cin >> m;
		vector<int> b(m);
		copy_n(istream_iterator<int>(cin), m, b.begin());
		vector<int> dp(m, numeric_limits<int>::max() / 2);
		for(auto i = 0; i < m; ++ i){
			if(a[0] == b[i]){
				dp[i] = 0;
			}
		}
		for(auto i = 1; i < n; ++ i){
			int c = a[i];
			if(c == a[i - 1]){
				continue;
			}
			vector<int> dp_next(m, numeric_limits<int>::max() / 2);
			int opt = numeric_limits<int>::max() / 2;
			for(auto j = 0; j < m; ++ j){
				opt = min(opt + 1, dp[j]);
				if(c == b[j]){
					ctmin(dp_next[j], opt);
				}
			}
			for(auto j = m - 1; j >= 0; -- j){
				opt = min(opt + 1, dp[j]);
				if(c == b[j]){
					ctmin(dp_next[j], opt);
				}
			}
			swap(dp, dp_next);
		}
		cout << *min_element(dp.begin(), dp.end()) << "\n";
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