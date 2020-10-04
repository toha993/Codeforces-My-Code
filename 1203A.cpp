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
		int n;
		cin >>n;
		int a[n];
		int start,end;
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			if(a[i]==1)
			{
				start=i;
			}
			if(a[i]==n)
			{
				end=i;
			}
		}
		int x=start+1;
		int k=2;
		if(x==n)
			x=0;
		while(x !=start)
		{
			if(a[x]!=k)
			{
				break;
			}
			x++;
			k++;
			if(x==n)
			{
				x=0;
			}
		}
		if(x==start)
		{
			cout << "YES" << endl;
			continue;
		}
		x=end+1;
		if(x==n)
			x=0;
		k=n-1;
		while(x !=end)
		{
			if(a[x]!=k)
			{
				break;
			}
			x++;
			k--;
			if(x==n)
			{
				x=0;
			}
		}
		if(x==end)
		{
			cout << "YES" << endl;
			continue;
		}
		cout << "NO" << endl;
	}
}