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
			int mx=0;
			multiset<int>bijor;
			for (int i = 0; i < n; ++i)
			{
				int x;
				cin >> x;
				bijor.insert(x);
				mx=max(mx,x);
			}
			
				cout << mx << " ";
				int gc=mx,rmv=0;
				bijor.erase(bijor.find(mx));
				while(!bijor.empty())
				{
					int mxi=0;
					int rmv;
					for (auto i : bijor)
					{
						if(__gcd(i,gc)>mxi)
							{
								mxi=max(mxi,__gcd(i,gc));
								rmv=i;
							}
					}
					gc=mxi;
					cout << rmv << " ";
					bijor.erase(bijor.find(rmv));
				}
				cout <<endl;
			

		}
	}