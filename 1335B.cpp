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
		int n,a,b;
		cin >> n >> a >> b;
		string s,p;
		for (int i = 0; i < b; ++i)
		{
			p +='a'+i;
		}
		int xd=n/b;
		for (int i = 0; i < xd; ++i)
		{
			s +=p;
		}
		if(n%b)
		{
			s +=s.substr(0,n%b);
		}
		cout << s << endl;
	}
}