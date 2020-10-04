

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
		int n,sum=0,bijor=0,jor=0;
		cin >> n;
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			sum +=x;
			if(x&1)
			{
				bijor=1;
			}
			else
				jor=1;
		}
		if(bijor && jor)
		{
			cout << "YES" << endl;
		}
		else
		{
			if(bijor)
			{
				if(sum&1)
				{
					cout << "YES" << endl;
				}
				else
					cout << "NO" <<endl;
			}
			else
				cout << "NO" << endl;
		}
	}
}