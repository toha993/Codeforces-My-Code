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

vector<string>v;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		int flag=0;
		int ck=0;
		cin >> n;
		for (int i = 0; i < n; ++i)
		{
			string x;
			cin >> x;
			if(x.length()%2)
				flag=1;
			for (int j = 0; j <x.length() ; ++j)
			{
				if(x[j]=='1')
					ck++;
			}
		}
		if(flag || ck%2==0)
			cout << n << endl;
		else
			cout << n-1 << endl;
	}
}