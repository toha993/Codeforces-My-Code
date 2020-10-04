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

int a[1005],w[505],used[505],dhukbe[1005];
int main()
{
	int n,m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	{
		cin >> w[i];
	}
	int ck=0;
	for (int i = 0; i < m; ++i)
	{
		cin >> a[i];
		if(!used[a[i]])
		{
			dhukbe[ck++]=a[i];
			used[a[i]]=1;
		}
	}
	// for (int i = 0; i < ck; ++i)
	// {
	// 	cout << dhukbe[i] << endl;
	// }
	long long ans=0;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < ck; ++j)
		{
			if(dhukbe[j]==a[i])
			{
				for (int k = j; k >= 1 ; k--)
				{
					dhukbe[k]=dhukbe[k-1];
				}
				dhukbe[0]=a[i];
				// for (int gg = 0; gg < ck; ++gg)
				// {
				// 	cout << dhukbe[gg] << " ";
				// }
				// cout  << endl;
				break;
			}
			ans +=w[dhukbe[j]];
			//cout << a[j] << " " << ans << endl;
		}
	}
	cout << ans << endl;
}