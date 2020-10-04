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

	long long n,m,s,dif;
	cin >> n >> m >> s;
	long long step=m;
	if((n-1)*m<s || s < m)
	{
		cout << "NO" << endl;
		exit(0);
	}
	cout << "YES" << endl;
	int xd=s%m;
	//cout << xd << endl;
	for (int i = 0; i < xd; ++i)
	{
		if(i%2==0)
		{
			cout << 2+s/m << " ";
		}
		else
			{
				cout << 1 << " ";
			}
	}
	if(xd&1)
	for (int i = 0; i < m-xd; ++i)
	{
		int nw=2+s/m;
		if(i%2==0)
		{
			cout << nw-s/m  << " ";
		}
		else
			cout << nw << " ";
	}
	else
	{
		int nw=1;
		if(xd==0)
		{
			for (int i = 0; i < m-xd; ++i)
			{
				if(i%2)
			{
				cout << 1 << " ";
			}
			else
				cout << 1+s/m << " ";
			}
			exit(0);
		}
		for (int i = 0; i < m-xd; ++i)
		{
			if(i%2)
		{
			cout << nw << " ";
		}
		else
			cout << nw+s/m << " ";
		}

	}
	// long long strt=max((s/m+s%m)+1,;
	// cout << strt << " ";
	// for (int i = 0; i < m-1; ++i)
	// {
	// 	if(i%2==0)
	// 	{
	// 		cout << strt-(s/m) << " ";
	// 	}
	// 	else
	// 	{
	// 		cout << strt << " ";
	// 	}
	// }
	// cout << endl;
}