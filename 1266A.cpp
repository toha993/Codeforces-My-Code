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
		string s;
		cin >> s;
		set<int>st;
		int ans=0,jor=0,zero=0;
		for (int i = 0; i < s.length(); ++i)
		{
			int x=s[i]-48;
			ans +=x;
			st.insert(x);
			if(x==0)
				{
					zero++;
					continue;
				}
			if(x%2==0)
			{
				jor=1;
			}
		}
		if((ans%3==0 && zero>=2) ||(ans%3==0 && zero && jor))
		{
			cout << "red" << endl;
		}
		else
			cout << "cyan" << endl;
	}
}