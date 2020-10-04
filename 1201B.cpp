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
	int n;
	cin >> n;
	int a[n+1];
	long long sum=0,mx=0;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		sum +=a[i];
		mx=max(a[i]*1ll,mx);
	}
	if(sum&1 || mx>(sum/2))
	{
		cout << "NO" << endl;
	}
	else
		cout << "YES" << endl;
	return 0;
}