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
		long long  ttl=0,flag=1;
		long long mx=0;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			ttl +=a[i];
			if(ttl<=0)
			{
				flag=0;
				//break;
			}
		}
		ttl=0;
		for (int i = n-1; i >=0;--i)
		{
			//cin >> a[i];
			ttl +=a[i];
			if(ttl<=0)
			{
				flag=0;
				break;
			}
		}
		if(flag)
		{
			cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;
	}
}