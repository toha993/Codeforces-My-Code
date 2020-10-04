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

using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	int dp[105][3];
	for (int i = 0; i <= n; ++i)
	{
		dp[i][0]=1e9;
		dp[i][1]=1e9;
		dp[i][2]=1e9;
	}
	dp[0][0]=0;
	dp[0][1]=0;
	dp[0][2]=0;
	for (int i = 1; i <= n; ++i)
	{
		dp[i][0]=1+ min(dp[i-1][0],min(dp[i-1][1],dp[i-1][2]));
		if(a[i]==1 || a[i]==3)
		{
			dp[i][1]=min(dp[i-1][0],dp[i-1][2]);
		}
		if(a[i]==2 || a[i]==3)
		{
			dp[i][2]=min(dp[i-1][0],dp[i-1][1]);
		}
	}
	cout << min(dp[n][0],min(dp[n][1],dp[n][2])) << endl;
}