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
	int a,b,c;
	cin >> a  >> b >> c;
	int g=__gcd(a,b);
	a /=g;
	b /=g;
	for (int i = 0; i < c; ++i)
	{
		int p,q,r,s;
		cin >> p >> q >> r >> s;
		q--,s--;
		if(p==1)
		{
			q /=a;
		}
		else
			q /=b;
		if(r==2)
		{
			s /=b;
		}
		else s/=a;
		if(q==s)
		{
			cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;
	}
}