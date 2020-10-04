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
	int a[n];
	int pos,kombe=0,barbe=0,mx=-1;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		if(a[i]>mx)
		{
			mx=a[i];
			pos=i;
		}
	}
	for (int i = pos; i>=1 ;--i)
	{
		if(a[i]-a[i-1]<0)
				{
					cout << "NO" << endl;
					exit(0);
				}
	}
	for (int i = pos; i<n-1 ;++i)
	{
			if(a[i+1]-a[i]>0)
					{
						cout << "NO" << endl;
						exit(0);
					}
	}
	cout << "YES" << endl;
}