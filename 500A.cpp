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


int main(int argc, char const *argv[])
{
	int n,m;
	cin >> n >> m;
	int a[n];
	for (int i = 1; i < n; ++i)
	{
		cin >> a[i];
	}
	int flag=0;
	for (int i = 1; i <n; i= i+a[i])
	{
		if(i+a[i]==m)
		{
			flag=1;
			break;
		}
		if(i+a[i]>m)
		{
			break;
		}
	}
	if(flag)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}