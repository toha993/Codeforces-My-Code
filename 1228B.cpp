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
#define mod 1000000007
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main()
{
	int n,m;
	cin >> n >> m;
	int r[n+5],c[m+5];
	for (int i = 1; i <= n; ++i)
	{
		cin >> r[i];
	}
	for (int i = 1; i <= m; ++i)
	{
		cin >> c[i];
	}
	int a[n+5][m+5]={0};
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			if( r[i]+1==j)
			{
				a[i][j]=-1;
			}
			else if(r[i]>=j)
			{
				a[i][j]=1;
			}
			else
				a[i][j]=0;
		}
	}
	// for (int i = 1; i <= n; ++i)
	// {
	// 	for (int j = 1; j <= m; ++j)
	// 	{
	// 		// if(a[i][j]==0)
	// 		// 	ck++;
	// 		cout << a[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	for (int i = 1; i <= m; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			
			 if(c[i]+1==j)
			{
				if(a[j][i]==1)
				{
					cout << 0 << endl;
					exit(0);
				}
				else
					a[j][i]=-1;
			}
			else if(c[i]>=j)
			{
				if(a[j][i]==-1)
				{
					cout << 0 << endl;
					exit(0);
				}
				else
					a[j][i]=1;
			}
		}
	}
	int ck=0;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			if(a[i][j]==0)
				ck++;
			//cout << a[i][j] << " ";
		}
		//cout << endl;
	}
	long long ans=1;
	for (int i = 0; i < ck; ++i)
	{
		ans =(ans*2)%mod;
	}
	cout << ans << endl;
}