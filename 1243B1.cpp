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
		int n;
		cin >> n;
		string s,p;
		cin >> s >> p;
		int ck=0;
		vector<char>v,xd;
		for (int i = 0; i < n; ++i)
		{
				if(s[i] !=p[i])
					{

						//
						ck++;
						if(ck==1)
						{
							xd.push_back(p[i]);
							v.push_back(s[i]);
						}
						else if(ck==2)
						{
							xd.push_back(s[i]);
							v.push_back(p[i]);

						}
						
					}
		}
		sort(v.begin(),v.end());
		sort(xd.begin(),xd.end());
		if(ck==2)
			{
				if(v==xd)
					cout << "Yes" << endl;
				else
					cout << "No" << endl;
			}

		else
			cout << "No" << endl;
	}
}