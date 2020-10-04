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
	//cin >> a[0];
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	sort(a,a+n);
	if(n==1)
	{
		cout << -1 << endl;
		exit(0);
	}
	if(	n==2)
	{

		if((a[1]-a[0])%2)
		{
			cout << 2 << endl;
			cout << a[0]-(a[1]-a[0]) << " " << a[1]+ (a[1]-a[0]) << endl;
			exit(0);
		}
		else if(a[0]==a[1])
		{
			cout << 1 << endl;
			cout << a[0] << endl;
			exit(0);
		}
		else
		{
			cout << 3 << endl;
			cout << a[0]-(a[1]-a[0]) << " " << a[0]+(a[1]-a[0])/2 << " " << a[1]+ (a[1]-a[0]) << endl;
			exit(0);
		}

	}
	
	vector<pair<int,int>>v;
	map<int,int>mp;
	for (int i = 1; i < n; ++i)
	{
		mp[a[i]-a[i-1]]++;
		if(mp[a[i]-a[i-1]]==1)
			v.push_back({a[i]-a[i-1],a[i-1]});
	}
	sort(v.begin(),v.end());
	if(mp.size()==1)
	{
		if(a[0]==a[1])
		{
			cout << 1 << endl;
			cout << a[0] << endl;
			exit(0);
		}
		cout  << 2  << endl;
		cout << a[0]-(a[1]-a[0]) << " " << a[n-1]+(a[1]-a[0]) << endl;
		exit(0);
	}
	else if(mp.size()>2)
	{
		cout << 0 << endl;
		exit(0);

	}
	else
	{
		if(v[0].first != (v[1].first)/2 || v[0].first==0 || mp[v[1].first]>1)
		{
			cout << 0 << endl;
			exit(0);
		}
		else
		{
			cout << 1 << endl;
			cout << v[1].second+v[0].first << endl;
		}
	}

}