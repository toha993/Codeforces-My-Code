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
	map<int,int>mp;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		mp[a[i]]=i;
	}
	map<int,int>gap,pag;
	set<int>st;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		int dif,diff;
		if(mp[x]>i)
		{
			dif=mp[x]-i;
			diff=n-mp[x]+i;
		}
		else if(i>mp[x])
		{
			dif=n-i+mp[x];
			diff=i-mp[x];
		}
		else
			dif=diff=0;
		//cout << dif << " " << diff << endl;
		gap[dif]++;
		pag[diff]++;
	}
	int xd=0;
	for(auto i : gap)
	{
		//cout << i << endl;
		xd=max(xd,i.second);
	}
	for(auto i : pag)
	{
		//cout << i << endl;
		xd=max(xd,i.second);
	}
	cout << xd << endl;
}