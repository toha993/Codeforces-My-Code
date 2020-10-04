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
		int n,s,k;
		cin >> n >> s >> k;
		map<int,int>mp;
		int a[k];
		for (int i = 0; i < k; ++i)
		{
			cin >> a[i];
			mp[a[i]]++;
		}
		if(mp[s]==0)
			{
				cout << 0<< endl;
				continue;
			}
		int i=1;
		//int found=0;
		while(1)
		{
			if(s-i>=1 && s+i<=n)
			{
				if(mp[s-i]==0 || mp[s+i]==0 )
					{
						cout << i << endl;
						break;	
					}
			}
			else if(s-i<=0)
			{
				if(mp[s+i]==0)
				{
					cout << i << endl;
					break;	
				}
			}
			else
			{
				if(mp[s-i]==0)
				{
					cout << i << endl;
					break;
				}
			}
			i++;
		}

	}
}