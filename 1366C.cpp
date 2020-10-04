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
	int t;
	cin >> t;
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		vector<int>v[n+m+5];
		for (int i = 1; i <=n; ++i)
		{
			for (int j = 1; j <= m; ++j)
			{
				int x;
				cin >> x;
				v[i+j].push_back(x);
			}
		}
		int p=2;
		int ttl=n+m;
		int ans=0;
		while(1)
		{
			int cp=0,ck=0,cg=0,cd=0;
			//cout << p << endl;
			if(p>=n+m-p+2)
				break;
			for (int i = 0; i < v[p].size(); ++i)
			{
				if(v[p][i]==1)
					ck++;
				else
					cp++;
			}
			for (int i = 0; i < v[n+m-p+2].size(); ++i)
			{
				if(v[n+m-p+2][i]==1)
					cg++;
				else
					cd++;
			}
			int sz=v[p].size();
			if((ck==cg && cg==sz) || (cp==cd&& cd==sz))
				{
					p++;
					//cout << ans << endl;
					continue;
				}
			else
			{
				
				int one=sz+sz-ck-cg;
				int zero=sz+sz-cp-cd;
				if(zero>one)
				{
					ans +=one;
				}
				else
					ans +=zero;
				//cout << ans << endl;
			}
			p++;


		}
		cout << ans << endl;
	}
}