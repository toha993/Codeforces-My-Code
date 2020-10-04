#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include <iomanip>
#define int long long
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


main()
{
	int n;
	cin >> n;
	int a[3][100005],dp[3][100005];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[1][i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> a[2][i];
	}
	for (int i = 0; i < n; ++i)
	{
		dp[1][i]=max(dp[1][i-1],dp[2][i-1]+a[1][i]);
		dp[2][i]=max(dp[2][i-1],dp[1][i-1]+a[2][i]);
	}
	cout << max(dp[1][n-1],dp[2][n-1]) << endl;
}