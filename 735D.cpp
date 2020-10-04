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
bool chk(ll n)
{
	if(n%2==0)
	{
		return 0;
	}
	if(n%3==0)
	{
		return 0;
	}
	for (ll i = 5; i*i<=n ; i +=2)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	ll n;
	cin >> n;
	if(n==3)
	{
		cout << 1 << endl;
		exit(0);
	}
	if(chk(n))
	{
		cout << 1 << endl;
	}
	else if(n%2==0)
	{
		if(n==2)
		{
			cout << 1 << endl;
		}
		else
			cout << 2 << endl;
	}
	else
	{
		if(chk(n-2))
		{
			cout <<2 << endl;
		}
		else
			cout << 3 << endl;
	}


}