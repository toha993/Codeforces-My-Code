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
		cin >> n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		int inc=0,dec=n-1;
		for (int i = 0; i < n; ++i)
		{
			if(a[i]>=i)
			{
				inc=i;
			}
			else
				break;
		}
		for (int i = n-1; i >=0; --i)
		{
			if(a[i]>=n-i-1)
			{
				dec=i;
			}
			else
				break;
		}
		if(inc==n-1 || dec ==0)
		{
			cout << "Yes" << endl;
		}
		else
		{
			//cout << inc << " " << dec << endl;
			if(inc>=dec)
			{
				cout << "Yes" << endl;
			}
			else
			{
				cout << "No" << endl;
			}
		}
	}
}