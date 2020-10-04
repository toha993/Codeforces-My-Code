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

//solven
int main()
{
	string s;
	cin >> s;
	set<int>st[30];
	for (int i = 0; i < s.size(); ++i)
	{
		st[s[i]-'a'].insert(i);
	}
	int q;
	cin >> q;
	while(q--)
	{
		int x;
		cin >> x;
		if(x==1)
		{
			int g;
			char c;
			cin >> g >> c;
			g--;
			st[s[g]-'a'].erase(g);
			s[g]=c;
			st[s[g]-'a'].insert(g);
		}
		else
		{
			int l,r;
			cin >> l >> r;
			l--,r--;
			int cnt=0;
			for (int i = 0; i < 26; ++i)
			{
				auto xd=st[i].lower_bound(l);
				if(xd !=st[i].end() && *xd <=r)
					cnt++;
			}
			cout << cnt << endl;
		}
	}


}