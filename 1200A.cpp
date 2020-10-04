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
	int n;
	cin >> n;
	string s="0000000000";
	string p;
	cin >> p;
	for (int i = 0; i <p.length(); ++i)
	{
		if(p[i]=='L')
		{
			for (int j = 0; j < s.length(); ++j)
			{
				if(s[j]=='0')
					{
						s[j]='1';
						break;
					}
			}
		}
		else if(p[i]=='R')
		{
			for (int j = s.length(); j >=0; --j)
			{
				if(s[j]=='0')
				{
						s[j]='1';
						break;
				}
			}
		}
		else
		{
			int x=p[i]-48;
			s[x]='0';
		}
		//cout << s << endl;
	}
	cout << s << endl;
}