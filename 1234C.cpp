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
		int n;
		cin >> n;
		string m,p;
		cin >> m >> p;
		int flag=0,upore=0;
		if(m[0] != '1' || m[0] != '2')
			flag=1,upore=1;
		int ssh=0;
		int cp=0;
		if(flag)
		for (int i = 0; i < n; ++i)
		{
			if(upore)
			{
				if(m[i]=='3' || m[i]=='4' || m[i]=='5' || m[i]=='6')
				{
					if(p[i]=='1' || p[i]=='2')
					{
						cout << "NO" << endl;
						ssh=1;
						break;
					}
					else
						{
							cp++,upore=0;
							continue;
						}
				}
				else
					upore=1;
			}
			else
			{
				if(p[i]=='3' || p[i]=='4' || p[i]=='5' || p[i]=='6')
				{
					if(m[i]=='1' || m[i]=='2')
					{
						cout << "NO" << endl;
						ssh=1;
						break;
					}
					else
						{
							cp++,upore=1;
							continue;
						}
				}
				else
					upore=0;
			}
		}
		if(flag && !ssh)
		{
			if(cp&1)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
			ssh=1;
		}
		if(ssh)
			continue;
		if(!flag)
		{
			for (int i = 1; i < n; ++i)
		{
			if(upore)
			{
				if(m[i]=='3' || m[i]=='4' || m[i]=='5' || m[i]=='6')
				{
					if(p[i]=='1' || p[i]=='2')
					{
						cout << "NO" << endl;
						ssh=1;
						break;
					}
					else
						{
							cp++,upore=0;
							continue;
						}
				}
				else
					upore=1;
			}
			else
			{
				if(p[i]=='3' || p[i]=='4' || p[i]=='5' || p[i]=='6')
				{
					if(m[i]=='1' || m[i]=='2')
					{
						cout << "NO" << endl;
						ssh=1;
						break;
					}
					else
						{
							cp++,upore=1;
							continue;
						}
				}
				else
					upore=0;
			}
		}
		
		}
		if(ssh)
			continue;
		cout << "YES" << endl;
		


	}
}