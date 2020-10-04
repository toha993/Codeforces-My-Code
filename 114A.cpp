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
#define ll long long
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main()
{
	ll n,m;
	cin >> n >> m;
	ll ans=n,flag=0,ck=0;
	if(m==n)
		flag=1;
	while(ans<m)
	{
		ans *=n;
		ck++;
		if(ans==m)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		cout << "YES" << endl << ck << endl;
	}
	else
		cout << "NO" << endl;
}