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

int a[200005],ans[200005];
long long sum[200005];
int main()
{
	int n,m;
	cin >> n >> m;
	map<int,int>mp;
	for (int i = 0; i < n; ++i)
	{	
		cin >> a[i];
		if(i==0)
			sum[i]=a[i];
		else
		sum[i] =sum[i-1]+a[i];
		//mp[a[i]]++;
		//cout << sum[i] << endl;
	}
	for (int i = 0; i < n; ++i)
	{
		if(sum[i]<=m)
		{
			ans[i]=0;
		}
		else
		{
			for (int j = 100; j>=1; --j)
			{
				//cout << sum[i]-(mp[j]*j) << endl;
				if(sum[i]-mp[j]*j<=m)
				{
					sum[i] -=m;
					if(sum[i]%j==0)
					{
						ans[i] +=sum[i]/j;
					}
					else
					{
						ans[i] +=sum[i]/j;
						ans[i] +=1;
					}
					break;
				}
				else
				{
					sum[i]=sum[i]-(mp[j]*j);
					ans[i] +=mp[j];
					//cout << ans[i] << endl;
				}
			}
		}
		mp[a[i]]++;
	}
	for (int i = 0; i < n; ++i)
	{
		cout << ans[i] << " ";
	}
	cout << endl;

}