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
int dp[11][101][101];
int a[101][101],flag[101][101];
int main()
{
	int n,q,mx;
	cin >>n >> q >>  mx;
	mx++;
	for (int i = 0; i < n; ++i)
	{
		int x,y,z;
		cin >> x >> y >> z;
		dp[z][x][y]++;
	}
	// int k=0;
	// for(k=0;k<mx;k++)
	// for (int i = 1; i < 101; ++i)
	// {
	// 	dp[k][i][1]=dp[k][i-1][1];
	// 	if(flag[i][1]==1)
	// 		{
	// 			dp[k][i][1] +=((a[i][1]+k)%mx);
	// 		}
	// }
	// for(k=0;k<mx;k++)
	// for (int i = 1; i < 101; ++i)
	// {
	// 	dp[k][1][i]=dp[k][1][i-1];
	// 	if(flag[1][i]==1)
	// 		{
	// 			dp[k][1][i] +=((a[1][i]+k)%mx);
	// 		}
	// }
	for (int k =0; k<mx; ++k)
	{
		for (int i = 1; i <101; ++i)
		{
			for (int j = 1; j < 101; ++j)
			{
				dp[k][i][j] +=dp[k][i][j-1]+dp[k][i-1][j]-dp[k][i-1][j-1];
			}
		}
	}
	// for (int k = 0; k <=10; ++k)
	// {
	// 	cout << k << ":   " << endl;
	// 	for (int i = 0; i < 6; ++i)
	// 	{
	// 		for (int j = 0; j < 6; ++j)
	// 		{
	// 			cout << dp[k][i][j] << " ";
	// 		}
	// 		cout << endl;
	// 	}1
	// 	cout << endl;
	// }
	for (int i = 0; i < q; ++i)
	{
		int t,x1,y1,x2,y2;
	//	cout << t;
		cin >> t >> x1 >> y1 >> x2 >> y2;
		//cout << t;
		//t %=mx;
		int ans=0;
		for (int j = 0; j <mx; ++j)
		{
			int xd=(t+j)%mx;
			int bala=dp[j][x2][y2]+dp[j][x1-1][y1-1]-dp[j][x1-1][y2]-dp[j][x2][y1-1];
			ans +=(xd*bala);
		}
		cout << ans << endl;
	}

}