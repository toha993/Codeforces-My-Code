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


int a[100005];
vector<pair<int,int>>v,vt;
vector<int>vq;
//deque<int>d;
int main()
{
	int n,q;
	cin >> n >> q;
	int mx;
	for (int i = 1; i <=n; ++i)
	{
		cin >> a[i];
		v.push_back({a[i],i});

	}
	//map<int,int>mp;
	//ck=n;
	for (int i = 1;;)
	{
		for (int j =2; j <=n; ++j)
			{
				if(a[i]>=a[j])
				{
					vt.push_back({a[i],a[j]});
					vq.push_back(a[j]);
				}
				else
				{
					vt.push_back({a[i],a[j]});
					vq.push_back(a[i]);
					a[i]=a[j];
					//vq.push_back(a[i]);
				}
			}
			mx=a[i];
			break;	
	}
	// for (int i = 0; i < vq.size(); ++i)
	// {
	// 	cout << vq[i] << endl;
	// }
	for (int i = 0; i < q; ++i)
	{
		long long p;
		cin >> p;
		//cout << p << endl;
		p--;
		if(p<n-1)
		{
			cout << vt[p].first << " " << vt[p].second << endl; 
		}
		else
		{ 
			long long ans=0;
			ans= p%(n-1);
			//cout << ans << endl;
			cout << mx<< " " <<  vq[ans] << endl; 
		}
	}
	// for (int i = 0; i < vt.size(); ++i)
	// {
	// 	cout << vt[i].first << " " << vt[i].second << endl;
	// }
	
}