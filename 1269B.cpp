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
	int n,m;
	cin >> n >> m;
	long long xd=0;
	vector<int>v,vt;
	for (int i = 0; i <n; ++i)
	{
		int x;
		cin >> x;
		//xd +=(x+m);
		v.push_back(x);
	}
	long long sum=0;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		//sum +=(x+m);
		vt.push_back(x);
	}
	sort(v.begin(), v.end());
	sort(vt.begin(), vt.end());
	if(v==vt)
	{
		cout << 0 << endl;
		exit(0);
	}
	vector<int>xdd;
	int ans=1e9;
	for (int i = 0; i < n; ++i)
	{
		int x=(vt[i]-v[0]+m)%m;
		//cout <<x << endl;
		for (int j = 0; j < n; ++j)
		{
			xdd.push_back((v[j]+x)%m);
		}
		sort(xdd.begin(),xdd.end());
		if(xdd==vt)
		{
			ans=min(ans,x);
		}
		xdd.clear();
	}
	cout << ans << endl;
	//long long dif=sum-xd;
	//cout << dif/n << endl;

}