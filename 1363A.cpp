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
		int n,x;
		cin >> n >> x;
		int cp=0,ck=0;
		for (int i = 0; i < n; ++i)
		{
			int p;
			cin >> p;
			if(p&1)
				ck++;
			else 
				cp++;
		}
		if(ck>=x)
		{
			if(cp!=0 || x&1)
			{
				cout << "Yes" << endl;
			}
			else
				cout << "No" << endl;
		}
		else if(cp>=x)
		{
			if(ck!=0)
			{
				cout << "Yes" << endl;
			}
			else
				cout << "No" << endl;
		}
		else
		{
			if((x-cp)&1 || (x-(cp-1))<=ck)
			{
				cout << "Yes" << endl;
			}
			else
				cout << "No" << endl;
		}
	}
}