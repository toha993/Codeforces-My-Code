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
	while(n--)
	{
		string xd;
		cin >> xd;
		string s[5];
		string res;
		for(int i=0;i<xd.length();i++)
		{
			if((xd[i]-48)%2)
				s[1]  +=(xd[i]);
			else
				s[2] +=(xd[i]);
		}
		reverse(s[1].begin(),s[1].end());
		reverse(s[2].begin(),s[2].end());
		while(!(s[1].empty()&&s[2].empty()))
		{
			if(s[1].empty())
			{
				res +=s[2].back();
				s[2].pop_back();
				continue;
			}
			else if(s[2].empty())
			{
				res +=s[1].back();
				s[1].pop_back();
				continue;
			}
			else
			{
				if(s[1].back() > s[2].back())
				{
					res +=s[2].back();
					//res += s[1].back();
					s[2].pop_back();
					//s[1].pop_back();
				}
				else
				{
					res +=s[1].back();
					//res += s[2].back();
					//s[2].pop_back();
					s[1].pop_back();
				}
			}
		}
		cout << res << endl;

	}
}