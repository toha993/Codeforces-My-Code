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
		long long a,b,c,n;
		cin >> a >> b >> c >> n;
		if(c*a+b<n)
		{
			cout << "NO" << endl;
			continue;
		}	
		if(c*a>=n)
		{
			int xd=(n/c);
			n -=(xd*c);
			if(b<n)
			{
				cout << "NO" << endl;
			}
			else
				cout << "YES" << endl;
			continue;
		}
		else
		{
			n -=(c*a);
			if(b<n)
			{
				cout << "NO" << endl;
			}
			else
				cout << "YES" << endl;
			continue;
		}


	}
}