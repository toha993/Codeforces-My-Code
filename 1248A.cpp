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
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int jor=0,bijor=0;
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			if(x&1)
				bijor++;
			else
				jor++;
		}
		int p;
		cin >> p;
		int jor1=0,bijor1=0;
		for (int i = 0; i < p; ++i)
		{
			int x;
			cin >> x;
			if(x&1)
			{
				bijor1++;
			}
			else
				jor1++;
		}
		cout << bijor1*bijor+jor*jor1 << endl;
	}
}