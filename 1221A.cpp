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
	int q;
	cin >> q;
	while(q--)
	{
		int x;
		cin >> x;
		map<int,int>mp;
		//queue<int>q;
		int flag=0,ans=0;
		for (int i = 0; i < x; ++i)
		{
			int m;
			cin >> m;
			if(m<2048)
				ans +=m;
			if(m==2048)
				flag=1;
		}
		if(flag)
			{
				cout << "YES" << endl;
				continue;
			}
		if(ans>=2048)
			{
				cout << "YES" << endl;
				continue;
			}
		cout << "NO" << endl;

	}
}