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
#define int long long
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


main()
{
	int n,k;
	cin >> n >> k;
	vector<int>a;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		a.push_back(x);
	}
	if(n==1)
	{
		cout << a[0]+k << endl;
		exit(0);
	}
	sort(a.begin(),a.end());
	while(k>0)
	{
		int sob=0;
		int x;
		if(!sob)
			x=lower_bound(a.begin(),a.end(),a[n/2]+1)-a.begin();
		int g;
		//cout << x << endl;
		if(x==n && sob==0)
		{
			sob=1;
		}
		else
			g=a[x];
		x=x-n/2;
		if(x<=k)
		{
			if(sob==1)
			{
				int p=k/x;
				a[n/2] +=p;
				k=0;
				//sob=0;
			}
			else
			{
				int y=g-a[n/2];
				//cout << g << "   " << a[n/2] << endl;
				//cout << y << endl;
				if(k>=x*y)
				{
					k -=(x*y);
					a[n/2] +=y;
				}
				else
				{
					int cg= k/x;
					a[n/2] +=cg;
					k=0;
				}
			}
		
		}
		else
			break;
	}
	cout << a[n/2] << endl;
}