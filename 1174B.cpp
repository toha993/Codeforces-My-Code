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

int a[100005];
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int flag=0,ck=0;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		if(a[i]%2==0)
		{
			ck++;
			flag=1;
		}
	}
	if(flag && ck<n)
	{
		sort(a,a+n);
		for (int i = 0; i < n-1; ++i)
		{
			cout << a[i] << " ";
		}
		cout << a[n-1] << endl;
	}
	else
	{
		for (int i = 0; i < n-1; ++i)
		{
			cout << a[i] << " ";
		}
		cout << a[n-1] << endl;
	}
	return 0;
}