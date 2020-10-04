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
		int n,m,k;
		cin >> n >> m >> k;
		//cout << n << " " << m << " " << k << endl;
		int a[105];
		
		//cout << n << endl;
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		if(n==1)
		{
			cout << "YES" << endl;
			continue;
		}
		int ase=m,flag=0;
		for (int i = 0; i < n-1; ++i)
		{
			if(a[i]+ase<a[i+1]-k)
			{
				flag=1;
				cout << "NO" << endl;
				break;
			}
			else
			{
				if(a[i+1]-a[i]>k)
				{
					ase -=(a[i+1]-a[i]-k);
				}
				else if(a[i+1]<a[i]+k)
				{
					ase +=(a[i]-max((a[i+1]-k),0));
				}
			}
		}
		if(!flag)
		{
			cout << "YES" << endl;
		}
	}
}