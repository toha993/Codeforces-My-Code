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

map<int,int>mp;
int visited[1000005];
int main()
{
	int x;
	cin >> x;
	int a[x];
	for (int i = 0; i < x; ++i)
	{
		cin >> a[i];
		if(a[i]<0)
		{
			if(mp[abs(a[i])]==0)
			{
				cout << -1 << endl;
				exit(0);
			}
			mp[abs(a[i])]--;
		}
		else
			mp[a[i]]++;
	}
	mp.clear();
	long long ttl=0;
	vector<int> v;
	for (int i = 0; i < x; ++i)
	{
		ttl +=a[i];
		mp[a[i]]=1;
		i++;
		while(ttl !=0)
		{
			if(mp[a[i]]==1)
			{
				//cout << a[i] << endl;
				cout << -1 << endl;
				exit(0);
			}
			mp[a[i]]=1;
			ttl +=a[i];
			i++;
			if(ttl<0)
			{
				cout << -1 << endl;
				exit(0);
			}
		}
		v.push_back(i);
		mp.clear();
		i--;
	}
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); ++i)
	{
		if(i!=0)
			cout << v[i]-v[i-1] << " ";
		else
			cout << v[i] << " ";
	}
	cout << endl;

}