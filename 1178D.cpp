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

bool isprime(int n)
{
	for (int i = 2; i*i <=n; ++i)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int n;
	cin >> n;
	if(n==2)
	{
		cout << -1 << endl;
		exit(0);
	}
	int p=n;
	if(isprime(n))
	{
		cout << n << endl;
		for (int i = 1; i < n; ++i)
		{
			cout << i << " " << i+1 << endl;
		}
		cout << 1 << " " << n << endl;
		exit(0);
	}
	else
	{
		while(!isprime(p))
		{
			p++;
		}
		cout << p << endl;
		p -=n;

	}
	for (int i = 1; i <n; ++i)
	{
		cout << i << " " << i+1 << endl;
		if(p)
			cout << i << " " << i+(n/2) << endl,p--;
	}
	cout << 1 << " " << n << endl;


}