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
	cin >>t;
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		string s;
		cin >> s;
		int frst1=0,frst0=0;
		for (int i = 0; i < s.length(); ++i)
		{
			if(s[i]=='1' && frst1==0)
				frst1=i+1;
		}
		if(frst1==0)
		{
			cout << s << endl;
			continue;
		}
		for (int i = frst1-1; i <n ; ++i)
		{
			if(s[i]=='0')
				{
					frst0=i+1;
					break;
				}
		}
		//cout << frst1 << " " << frst0 << endl;
		if(frst0!=0)
		while(m)
		{
			int xd=frst0-frst1;
			//cout << xd  << " " << m<< endl;
			if(xd<=m)
				{
					m -=xd;
					s[frst1-1]='0';
					s[frst0-1]='1';
				}
			else
			{
				s[frst0-1-m]='0';
				s[frst0-1]='1';
				break;
			}
			int flag=0;
			for (int i =frst0; i < n; ++i)
			{
				if(s[i]=='0')
					{
						flag=1;
						frst0=i+1;
						frst1++;
						break;
					}
			}
			if(!flag)
				break;
		}
		cout << s << endl;
	}
}