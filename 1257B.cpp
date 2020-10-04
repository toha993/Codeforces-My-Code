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
		int x,y;
		cin >> x >> y;
		if(x==y)
		{
			cout << "YES" << endl;
			continue;
		}
		else if(x==1)
		{
			cout << "NO" << endl;
		}
		else if(x==2)
		{
			if(y==1 || y==3)
			{
				cout << "YES" << endl;
			}
			else
				cout << "NO" << endl;
			continue;
		}
		else if(x==3)
		{
			if(y==1||y==2)
			{
				cout << "YES" << endl;
			}
			else
				cout << "NO" << endl;
		}
		else
			cout << "YES" << endl;
	}
}