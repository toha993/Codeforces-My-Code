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
		string s,p;
		cin >> s >> p;
		if(p.length()<s.length())
		{
			cout << "NO" << endl;
			continue;
		}
		//map<int,int>mp,md;
		int flag=1;
		sort(s.begin(),s.end());
		for (int i = 0; i <= p.length()-s.length(); ++i)
		{
			string xd=p.substr(i,s.length());
			sort(xd.begin(),xd.end());
			if(xd==s)
			{
				flag=0;
				break;
			}
		}
		if(flag)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
}