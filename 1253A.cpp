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
		int x;
		cin >> x;
		int a[x+5],b[x+5];
		for (int i = 0; i < x; ++i)
		{
			cin >> a[i];
		}
		int flag=0;
		for (int i = 0; i < x; ++i)
		{
			cin >> b[i];
			a[i] = b[i]-a[i];
			if(a[i]<0)
			{
				flag=1;
			}
		}
		if(flag)
		{
			cout << "NO" << endl;
			continue;
		}
		vector<int>v;
		for (int i = 0; i < x; ++i)
		{
			if(a[i] !=0)
			{
				while(i<x)
				{
					v.push_back(a[i]);
					i++;
				}
			}
		}
		int need=0;
		if(!v.empty())
		{
			need=v[0];
		}
		for (int i = 0; i < v.size(); ++i)
		{
			//cout << v[i] << endl;
			if(v[i]==need)
				continue;
			else
			{
				if(v[i]==0)
				{
					need=0;
				}
				else if(v[i] !=need)
				{
					flag=1;
					break;
				}
			}
		}
		if(flag)
		{
			cout << "NO" << endl;
		}
		else
			cout << "YES" << endl;
	}
}